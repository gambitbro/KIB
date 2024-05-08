#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";



int main()
{  
    Mat src = imread(folder+"lenna.bmp", IMREAD_GRAYSCALE);

    int num = (int)(src.total()*0.1);
    for(int i = 0; i < num; i++){
        int x = rand() % src.cols;
        int y = rand() % src.rows;
        src.at<uchar>(y, x) = (i % 2)*256;
    }
    
    Mat dst1;
    GaussianBlur(src, dst1, Size(), 1);

    Mat dst2;
    medianBlur(src, dst2, 3);

    imshow("src", src);
    imshow("dst1", dst1);
    imshow("dst2", dst2);

    waitKey(0);
    destroyAllWindows();
    return 0;
}