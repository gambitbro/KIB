#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";



int main()
{  
    Mat src = imread(folder+"tekapo.bmp", IMREAD_GRAYSCALE);
    Mat M = Mat_<double>({2, 3}, {1, 0, 100, 0, 1, 50});
    Mat dst;
    warpAffine(src, dst, M, Size());

    imshow("src", src);
    imshow("dst", dst);
    waitKey(0);
    destroyAllWindows();
    return 0;
}