#include "opencv2/opencv.hpp"
#include <iostream>
#include "opencv2/freetype.hpp"

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
    Mat img(500, 1000, CV_8UC3, white);

    Ptr<freetype::FreeType2> ft2 = freetype::createFreeType2();
    ft2->loadFontData("/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf", 0);
    String text = u8"Hello, I'm not utf-8 text!";
    int fontHeight = 45;
    Size textSize = ft2->getTextSize(text, fontHeight, -1, 0);
    
    ft2->putText(img, text, Point(20, 60+textSize.height), fontHeight, blue, -1, LINE_AA, true);
    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}