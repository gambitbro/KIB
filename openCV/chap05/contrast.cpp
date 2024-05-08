//효과적인 명암비 조절 예제

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
    Mat original = src.clone();
    Mat src2 = src.clone();
    
    src = src * 2.f;                    //1번째 방법
    src2 = src2 + (src2 - 180) * 1.f;     //2번째 방법

    imshow("original", original);
    imshow("src", src);
    imshow("src2", src2);
    waitKey(0);
    destroyAllWindows();
    return 0;
}