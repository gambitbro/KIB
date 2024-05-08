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
    
    Mat src1 = imread(folder+"lenna256.bmp", IMREAD_GRAYSCALE);
    Mat src2 = imread(folder+"square.bmp", IMREAD_GRAYSCALE);

    Mat dst1, dst2, dst3, dst4, dst5;

    bitwise_and(src1, src2, dst1);
    bitwise_or(src1, src2, dst2);
    bitwise_xor(src1, src2, dst3);
    bitwise_not(src1, dst4);
    bitwise_not(src2, dst5);

    imshow("src1", src1);
    imshow("src2", src2);
    imshow("dst1", dst1);
    imshow("dst2", dst2);
    imshow("dst3", dst3);
    imshow("dst4", dst4);
    imshow("dst5", dst5);

    waitKey(0);
    destroyAllWindows();
    return 0;
}