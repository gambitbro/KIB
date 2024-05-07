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
    Mat img = imread(folder+"lenna.bmp", IMREAD_GRAYSCALE);
    cout << "sum[R]: " << int(sum(img)[2]) << endl;
    cout << "sum[B]: " << (int)sum(img)[0] << endl;
    cout << "sum[G]: " << int(sum(img)[1]) << endl;
    cout << "Mean[R]: " << (int)mean(img)[2] << endl;
    cout << "Mean[B]: " << (int)mean(img)[0] << endl;
    cout << "Mean[G]: " << (int)mean(img)[1] << endl;

    double minVal, maxVal;
    Point minLoc, maxLoc;
    minMaxLoc(img, &minVal, &maxVal, &minLoc, &maxLoc);
    cout << "minVal: " << minVal << endl;
    cout << "maxVal: " << maxVal << endl;
    cout << "minLoc: " << minLoc << endl;
    cout << "maxLoc: " << maxLoc << endl;

    Mat src = Mat_<float>({1, 5}, {-1.f, -0.5f, 0.f, 0.5f, 1.f});
    Mat dst;


    normalize(src, dst, 0, 255, NORM_MINMAX, CV_8UC1);
    cout << "src: " << src << endl;
    cout << "dst: " << dst << endl;
    
    cout << "cvRound(2.5): " << cvRound(2.5) << endl;
    cout << "cvRound(2.51): " << cvRound(2.51) << endl;
    cout << "cvRound(2.49): " << cvRound(2.49) << endl;

    circle(img, minLoc, 5, 0, -1);
    circle(img, maxLoc, 5, 255, -1);

    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}