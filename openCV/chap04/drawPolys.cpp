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
    Mat img(400, 400, CV_8UC3, Scalar(255, 255, 255));
    
    rectangle(img, Rect(50, 50, 100, 70), red, 2);
    rectangle(img, Point(50, 50), Point(100, 70), blue, 2);

    circle(img, Point(300, 120), 30, green, -1, LINE_AA); //두께에 -1을 하면 채워진 원이 그려진다.
    circle(img, Point(350, 120), 30, yellow, 3, LINE_AA);

    ellipse(img, Point(120, 200), Size(60, 30), 20, 0, 360, red, -1, LINE_AA);
    //지정한 width, height에 따른 사각형을 연산하여 그린 후, 회전각도만큼 기울어진 사각형 안에 타원형이 최종적으로 그려진다.
    ellipse(img, Point(200, 200), Size(100, 50), 45, 0, 120, green, 2, LINE_AA);
    
    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}