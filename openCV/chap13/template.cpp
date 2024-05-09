#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";

int main() {
	Mat src = imread(folder + "circuit.bmp", IMREAD_COLOR);
    Mat temp1 = imread(folder + "crystal.bmp", IMREAD_COLOR);

    Mat res, res_norm;
    matchTemplate(src, temp1, res, TM_CCOEFF_NORMED);
    normalize(res, res_norm, 0, 255, NORM_MINMAX, CV_8U);

    double maxval;
    Point maxloc;
    minMaxLoc(res, 0, &maxval, 0, &maxloc);
    cout << "maxval: " << maxval << endl;

    rectangle(src, Rect(maxloc.x, maxloc.y, temp1.cols, temp1.rows), Scalar(0, 0, 255), 2);

    imshow("res_norm",res_norm);
    imshow("src",src);
	waitKey();
	destroyAllWindows();
	return 0;
}