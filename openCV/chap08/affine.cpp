#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";



int main()
{  
    Mat src = imread(folder+"tekapo.bmp", IMREAD_GRAYSCALE);

    Point2f srcPts[3], dstPts[3];
    srcPts[0] = Point2f(0, 0);
    srcPts[1] = Point2f(src.cols-1, 0);
    srcPts[2] = Point2f(src.cols-1, src.rows-1);
    dstPts[0] = Point2f(50, 50);
    dstPts[1] = Point2f(src.cols-100, 100);
    dstPts[2] = Point2f(src.cols-50, src.rows-50);

    // srcPts[0] = Point2f(0, 0);
    // srcPts[1] = Point2f(1, 0);
    // srcPts[2] = Point2f(1, 1);
    // dstPts[0] = Point2f(0, 0);
    // dstPts[1] = Point2f(2, 0);
    // dstPts[2] = Point2f(2, 2);

    Mat M = getAffineTransform(srcPts, dstPts);
    Mat dst;
    warpAffine(src, dst, M, Size());

    imshow("src", src);
    imshow("dst", dst);
    waitKey(0);
    destroyAllWindows();
    return 0;
}