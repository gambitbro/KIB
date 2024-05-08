//트랙바 만들어서 사진 밝기 조절하기

#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";

void on_brightness(int pos, void *userdata);

int main()
{
    Scalar white = Scalar(255, 255, 255);
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);
    
    Mat src = imread(folder+"lenna.bmp", IMREAD_GRAYSCALE);
    int position = 256;
    namedWindow("img");
    createTrackbar("Brightness", "img", &position, 511, on_brightness, (void *)&src);

    on_brightness(0, &src);
    imshow("img", src);
    waitKey(0);
    destroyAllWindows();
    return 0;
}

void on_brightness(int pos, void *userdata)
{
    Mat img = *(Mat *)userdata;
    Mat dst = img + (pos-256);
    imshow("img", dst);
}