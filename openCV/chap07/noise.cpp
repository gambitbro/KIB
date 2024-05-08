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
    
    Mat src = imread(folder+"lenna.bmp", IMREAD_GRAYSCALE);
    Mat noise(src.size(), CV_32SC1);
    int stddev = 10;
    randn(noise, 0, stddev);

    Mat dst;
    //Mat dst = src + noise;
    add(src, noise, dst, Mat(), CV_8U);

    imshow("src", src);
    imshow("dst", dst);

    waitKey(0);
    destroyAllWindows();
    return 0;
}