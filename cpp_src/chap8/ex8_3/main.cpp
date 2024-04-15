#include <iostream>
#include <string>
using namespace std;

class TV{
protected:
    int size;   //스크린 크기
public:
    TV()
    {
        this->size = 10;
    }
    TV(int size)
    {
        this->size = size;
    }
    int getSize()
    {
        return size;
    }
};

class WideTV : public TV{
    bool videoIn;
public:
    WideTV(int size, bool videoIn) : TV(size)
    {
        this->videoIn = videoIn;
    }
    bool getVideoIn()
    {
        return videoIn;
    }
};

class SmartTV : public WideTV{
    string ipAddr;  //인터넷 주소
public:
    SmartTV(string ipAddr, int size) : WideTV(size, true)
    {
        this->ipAddr = ipAddr;
    }
    string getInAddr()
    {
        return ipAddr;
    }
};

int main(void)
{
    SmartTV htv("192.0.0.1", 32);
    cout << "size = " << htv.getSize() << endl;
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;
    cout << "IP = " << htv.getInAddr() << endl;
    
    return 0;
}