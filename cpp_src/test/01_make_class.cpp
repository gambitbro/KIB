#include <iostream>
using namespace std;

//클래스 선언
class TV{
public:
    //멤버 변수
    bool power;
    int channel;
    int volume;

    //생성자 함수
    TV();       //기본 생성자
    TV(int r1, int r2);     //채널, 음량값을 갖는 생성자

    //멤버 함수
    void powerOn();
    void powerOff();
    void increaseChannel();
    void decreaseChannel();
    void increaseVolume();
    void decreaseVolume();
};






//클래스 구현
TV::TV()
{
    power = false;
    channel = 0;
    volume = 0;
}

TV::TV(int r1, int r2)
{
    power = false;
    channel = r1;
    volume = r2;
}




void TV::powerOn()
{
    power = true;
}

void TV::powerOff()
{
    power = false;
}

void TV::increaseChannel()
{
    ++channel;
    // if(channel > 30){
    //     channel = 0;
    // }
}

void TV::decreaseChannel()
{
    --channel;
    // if(channel < 0){
    //     channel = 30;
    // }
}

void TV::increaseVolume()
{
    ++volume;
}

void TV::decreaseVolume()
{
    --volume;
}





//메인 함수
int main(void)
{
    TV samsung(100, 0);     //객체 생성
    TV LG(10, 0);          //객체 생성

    samsung.increaseChannel();
    samsung.increaseVolume();
    LG.increaseChannel();
    LG.increaseVolume();

    cout << "samsung의 채널은 " << samsung.channel << "입니다." << endl;
    cout << "samsung의 볼륨은 " << samsung.volume << "입니다." << endl;
    cout << "LG의 채널은 " << LG.channel << "입니다." << endl;
    cout << "LG의 볼륨은 " << LG.volume << "입니다." << endl;
   
    return 0;
}