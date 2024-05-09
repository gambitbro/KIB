#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";

int main(int argc, char *argv[]) {
	Mat src = imread(folder + "milkdrop.bmp");
    Mat bin;
    threshold(src, bin, 128, 255, THRESH_BINARY);

    Mat dst1, dst2, dst3, dst4, dst5;
    morphologyEx(bin, dst1, MORPH_OPEN, Mat());
    morphologyEx(dst1, dst2, MORPH_CLOSE, Mat());
    morphologyEx(dst2, dst3, MORPH_GRADIENT, Mat());
    morphologyEx(bin, dst4, MORPH_TOPHAT, Mat());
    morphologyEx(bin, dst5, MORPH_CROSS, Mat());

    Mat erodeMat, dilateMat;
    erode(bin, erodeMat, Mat());
    dilate(bin, dilateMat, Mat());

    imshow("bin", bin);
    imshow("open", dst1);
    imshow("close", dst2);
    imshow("gradient", dst3);
    imshow("tophat", dst4);
    imshow("cross", dst5);
    waitKey();
    destroyAllWindows();
	return 0;
}