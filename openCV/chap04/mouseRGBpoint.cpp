#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";

void onMouse(int event, int x, int y, int flags, void *);

struct MyData{
    Point ptOld;
    Point ptNew;
    Mat img;
    Mat background;
    Scalar white = Scalar(255, 255, 255);
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);

    vector<Vec3b> = mouseBGR;
    bool flag = false;
};

int main()
{
    MyData myData;
    FileStorage fs;
    myData.img = imread(folder+"lenna.bmp", IMREAD_COLOR);

    namedWindow("img");
    imshow("img", myData.img);

    setMouseCallback("img", onMouse, (void*)&myData);

    int keycode = waitKey(0);
    if(keycode == 27){
        fs.open(folder+"mouseBGRvector.json", FileStorage::WRITE);
        fs << "mouseBGR" << myData.mouseBGR;
    }
    destroyAllWindows();
    return 0;
}

void onMouse(int event, int x, int y, int flags, void *myData)
{
    MyData *ptr = (MyData *)myData;
    switch (event){
        case EVENT_LBUTTONDOWN:
            ptr->ptOld = Point(x, y);
            cout << "Event Left Button Down: " << ptr->background.at<uchar>(x, y) << endl;
            ptr->flag = true;
            break;
        case EVENT_LBUTTONUP:
            fs << "Blue" << Blue;
            fs << "Green" << Green;
            fs << "Red" << Red;

            break;
        case EVENT_MOUSEMOVE:
            if(EVENT_FLAG_LBUTTON){
                ptr->background.copyTo(ptr->img);
                rectangle(ptr->img, Rect(Point(x-25, y-25), Point(x+25, y+25)), ptr->white, 5);
                ptr->ptOld = Point(x, y);
                imshow("img", ptr->img);
            }
            break;
        default:
            break;
    }
}