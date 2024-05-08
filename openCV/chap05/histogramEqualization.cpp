#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";

void histogramGraph(Mat &graph, const Mat &src);

int main()
{
    Scalar white = Scalar(255, 255, 255);
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);
    
    Mat src = imread(folder+"hawkes.bmp", IMREAD_GRAYSCALE);

    Mat dst;
    equalizeHist(src, dst);


    imshow("src", src);
    imshow("dst", dst);
    
    waitKey(0);
    destroyAllWindows();
    return 0;
}

void histogramGraph(Mat &graph, const Mat &src)
{
    Mat histo;
    int channels[] = {0};
    int dims = 1;
    const int histSize[] = { 256 };
    float graylevel[] = { 0, 256 };
    const float *ranges[] = { graylevel };

    calcHist(&src, 1, channels, noArray(), histo, dims, histSize, ranges);

    //make graph histogram
    
    normalize(histo, histo, 0, 100, NORM_MINMAX);
    for(int i = 0; i < 256; ++i){
        line(graph, Point(i, 100), Point(i, 100-cvRound(histo.at<float>(i))), Scalar(0));
    }
}