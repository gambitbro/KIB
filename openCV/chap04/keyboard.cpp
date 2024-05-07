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
    Mat img = imread(folder+"lenna.bmp");
    int keycode;

    namedWindow("img");
    imshow("img", img);
    while(1){
        keycode = waitKey(33);       //waitKey 함수는 눌린 키의 ASCII값을 int로 반환한다.
        cout << "keycode: " << keycode << endl;
        if(keycode == 27){
            break;  //ESC
        }else if(keycode == 'i' || keycode == 'I'){
            img = ~img;
            imshow("img", img);
        }
    }
    
    destroyAllWindows();
    return 0;
}