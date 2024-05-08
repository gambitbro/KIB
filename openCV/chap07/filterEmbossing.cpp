#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";



int main()
{
    Scalar white = Scalar(255, 255, 255);
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);
    
    Mat src = imread(folder+"rose.bmp", IMREAD_GRAYSCALE);
    float data[] = {-1, -1, 0, -1, 0, 1, 0, 1, 1};
    Mat emboss(3, 3, CV_32F, data);

    Mat dst;
    filter2D(src, dst, -1, emboss, Point(-1, -1), 128);

    imshow("src", src);
    imshow("dst", dst);

    waitKey(0);
    destroyAllWindows();
    return 0;
}