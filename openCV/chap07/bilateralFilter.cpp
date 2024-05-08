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

   
    Mat dst0;
    add(src, noise, dst0, Mat(), CV_8U);

    Mat dst1;
    GaussianBlur(dst0, dst1, Size(), 5);

    Mat dst2;
    bilateralFilter(dst0, dst2, -1, 10, 5);

    imshow("src", src);
    imshow("noise", dst0);
    imshow("Gaussian", dst1);
    imshow("bilateral", dst2);

    waitKey(0);
    destroyAllWindows();
    return 0;
}