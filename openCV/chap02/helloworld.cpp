#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/qq43/KIB/openCV/data/";

int main()
{
    cout << "Hello, World!"<< endl;
    Mat img;
    img = imread(folder + "lenna.bmp");
    imshow("image", img);
    waitKey(0);
    return 0;
}
