#include "opencv2/opencv.hpp"
#include <iostream>
#include "opencv2/freetype.hpp"

using namespace cv;
using namespace std;
string folder = "/home/qq43/KIB/openCV/data/";
void onMouse(int event, int x, int y, int flags, void *);


Mat src;
Point2f srcPts[4], dstPts[4];
bool flag = false;


int main()
{   
    src = imread(folder+"card.bmp", IMREAD_COLOR);

    namedWindow("img");      //앞으로 img라는 이름의 윈도우를 쓰겠다 선언
    setMouseCallback("img", onMouse, (void*)&myData);

    imshow("img", myData.img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}

void onMouse(int event, int x, int y, int flags, void *myData)
{
    static int cnt = 0;

    switch (event){
        case EVENT_LBUTTONDOWN:
        if(cnt < 4){
            srcPts(cnt++) = Point2f(x, y);
        }
            ptr->ptOld = Point(x, y);
            cout << "Event Left Button Down: " << x << ", " << y << endl;
            ptr->flag = true;
            break;
        case EVENT_LBUTTONUP:
            // ptNew = Point(x, y);
            cout << "Event Left Button UP: " << x << ", " << y << endl;
            ptr->flag = false;
            break;
        case EVENT_MOUSEMOVE:
            
            if(ptr->flag & EVENT_FLAG_LBUTTON){
                line(ptr->img, ptr->ptOld, Point(x, y), ptr->green, 5);
                ptr->ptOld = Point(x, y);
                imshow("img", ptr->img);
            }
            break;
    
        default:
            break;
    }
}