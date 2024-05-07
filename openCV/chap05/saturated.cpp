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
    Mat brightSrc, saturateSrc;
    brightSrc = src.clone();
    saturateSrc = src.clone();
    
    for(auto it = brightSrc.begin<uchar>(); it != brightSrc.end<uchar>(); it++){
        *it = *it +100;
    }

    for(auto it = saturateSrc.begin<uchar>(); it != saturateSrc.end<uchar>(); it++){
        *it = saturate_cast<uchar>(*it+100);
    }
    imshow("src", src);
    imshow("brightSrc", brightSrc);
    imshow("saturateSrc", saturateSrc);
    waitKey(0);
    destroyAllWindows();
    return 0;
}