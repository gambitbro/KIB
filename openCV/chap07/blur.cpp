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

    for(int ksize = 3; ksize <= 19; ksize+=2){
        Mat dst;
        blur(src, dst, Size(ksize, ksize));
        dsts.push_back(dst);
    }
    

    imshow("src", src);
    int i = 0;
    //typecasting int to String
    for (auto dst : dsts){
        imshow("dst" + to_string(i), dst);
        i++;
    }

    waitKey(0);
    destroyAllWindows();
    return 0;
}