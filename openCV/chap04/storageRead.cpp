#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;
string folder = "/home/qq43/KIB/openCV/data/";

int main()
{
    String name;
    int age;
    Point pt1;
    vector<int> v;
    Mat mat1;

    FileStorage fs;
    fs.open(folder+"mydata.json", FileStorage::READ);
    if(!fs.isOpened()){
        cerr << "File open failed!" << endl;
        return 1;
    }
    fs["name"] >> name;
    fs["age"] >> age;
    fs["point"] >> pt1;
    fs["v"] >> v;
    fs["mat1"] >> mat1;
    
    fs.release();

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "point: " << pt1 << endl;
    cout << "v: {";
    for(auto i : v){
        cout << i << ", ";
    }
    //for(int i=0; i<v.size(); i++){} 위의 포문은 이렇게 쓸 수 있음.
    cout << " }" << endl;
    cout << "mat1: " << mat1 << endl;
    return 0;
}