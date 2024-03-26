#include <iostream>
using namespace std;

int main()
{
    cout << "Hello\n\r";
    cout << "World\n\r";
    cout << 'H' << 'e' << 'L' << 'L' << 'o';

    cout << "**********************************************\n\r";

    int width;
    int height;
    

    cout << "너비와 높이를 입력하세요>>";
    cin >> width;
    cin >> height;

    int area = width * height;
    
    cout << width << "\n" << height << "\n";
    cout << area << "\n";

    return 0;
}