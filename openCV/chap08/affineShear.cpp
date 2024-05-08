#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";



int main()
{  
    Mat src = imread(folder+"tekapo.bmp", IMREAD_GRAYSCALE);
    double mx = 0.3;
    double my = 0.2;
    Mat M = Mat_<double>({2, 3}, {1, mx, 0, my, 1, 0});
    Mat dst;
    warpAffine(src, dst, M, Size());

    imshow("src", src);
    imshow("dst", dst);
    waitKey(0);
    destroyAllWindows();
    return 0;
}