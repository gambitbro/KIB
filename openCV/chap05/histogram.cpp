
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
    Mat histo;
    int channels[] = {0};
    int dims = 1;
    const int histSize[] = { 256 };
    float graylevel[] = { 0, 256 };
    const float *ranges[] = { graylevel };

    calcHist(&src, 1, channels, noArray(), histo, dims, histSize, ranges);

    imshow("src", src);
    cout << "histo: " << histo << endl;

    //make graph histogram
    Mat graph(100, 256, CV_8U, Scalar(255));
    normalize(histo, histo, 0, 100, NORM_MINMAX);
    for(int i = 0; i < 256; ++i){
        line(graph, Point(i, 100), Point(i, 100-cvRound(histo.at<float>(i))), Scalar(0));
    }
    imshow("graph", graph);
    
    waitKey(0);
    destroyAllWindows();
    return 0;
}