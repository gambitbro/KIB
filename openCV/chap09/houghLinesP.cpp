#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";

int main()
{  
    Mat src = imread(folder+"building.jpg", IMREAD_GRAYSCALE);
    Mat dst1, dst2;

    Mat edge;
    Canny(src, edge, 50, 150);

    vector<Vec4i> lines;
    HoughLines(edge, lines, 1, CV_PI / 180, 160, 50, 5);

    Mat dst;
    cvtColor(edge, dst, COLOR_GRAY2BGR);

    Point pt1, pt2;
    for(auto i : lines){
        line(dst, Point(i[0], i[1]), Point(i[2], i[3]), Scalar(0, 0, 255), 2);   
    } 
    imshow("edge", edge);
    imshow("src", src);
    imshow("dst", dst);
    waitKey(0);
    destroyAllWindows();
    return 0;
}