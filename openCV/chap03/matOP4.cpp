#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/qq43/KIB/openCV/data/";

int main()
{
    Mat mat1 = Mat::zeros(3, 4, CV_8UC1);
    cout << "Before_mat1: " << mat1 << endl;

    for(int j=0; j<mat1.rows; j++){
        for(int i=0; i<mat1.cols; i++){
            mat1.at<uchar>(j, i)++;
        }
    }
    cout << "After_mat1: " << mat1 << endl;

    for(int j=0; j<mat1.rows; j++){
        uchar *p = mat1.ptr<uchar>(j);
        for(int i=0; i<mat1.cols; i++){
            p[i]++;
        }
    }
    cout << "After_ptr_mat1: " << mat1 << endl;

    for( auto it = mat1.begin<uchar>(); it != mat1.end<uchar>(); it++ ){
        (*it)++;
    }
    cout << "After_iterator_mat1: " << mat1 << endl;

    return 0;
}