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
    
    Mat src = imread(folder+"rose.bmp", IMREAD_GRAYSCALE);
    
    vector<Mat> dsts;

    for(int sigma = 1; sigma <= 10; sigma+=1){
        Mat dst;
        GaussianBlur(src, dst, Size(0, 0), sigma);
        dsts.push_back(dst);
    }
    
    imshow("src", src);
    int i = 0;
    //typecasting int to String
    for (auto dst : dsts){
        imshow("dst" + to_string(i+1), dst);
        i++;
    }

    waitKey(0);
    destroyAllWindows();
    return 0;
}