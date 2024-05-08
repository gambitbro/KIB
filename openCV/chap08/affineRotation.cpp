#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";



int main()
{  
    Mat src = imread(folder+"tekapo.bmp");
    Point2d cp(src.cols/2, src.rows/2);
    Mat M = getRotationMatrix2D(cp, 20, 1);
    Mat dst;
    warpAffine(src, dst, M, Size());

    imshow("src", src);
    imshow("dst", dst);
    waitKey(0);
    destroyAllWindows();
    return 0;
}