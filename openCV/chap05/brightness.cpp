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
    
    Mat src = imread(folder+"lenna.bmp", IMREAD_COLOR);
    Mat gray, addgray, subgray;
    cvtColor(src, gray, COLOR_BGR2GRAY);


    imshow("src", src);
    imshow("gray", gray);
    add(gray, 50, addgray);     //addgray = gray + 50;
    imshow("addgray", addgray);
    subtract(gray, 50, subgray);    //subgray = gray - 50;
    imshow("subgray", subgray);
    waitKey(0);
    destroyAllWindows();
    return 0;
}