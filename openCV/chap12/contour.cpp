#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";

int main() {
	Mat src = imread(folder + "contours.bmp", IMREAD_GRAYSCALE);

    vector<vector<Point>> contours;     //벡터를 두번
	findContours(src, contours, RETR_EXTERNAL, CHAIN_APPROX_NONE);
    // cout << contours.size() << endl;
    // for(auto contour : contours){
    //     cout << contour.size() << ".................." << endl;
    //     for(auto Point : contour){
    //         cout << Point << ", " << endl;
    //     }
    // }
    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);
    drawContours(dst, contours, -1, Scalar(255, 0, 0), 5);

    imshow("src",src);
    imshow("dst",dst);
	waitKey();
	destroyAllWindows();
	return 0;
}