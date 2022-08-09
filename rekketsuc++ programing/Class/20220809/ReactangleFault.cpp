#include <iostream>
using namespace std;

class Point{
    public:
    int x;
    int y;
};

class Reactangle{
    public:
    Point upLeft;
    Point lowRight;
    public:
    void ShowRecInfo(){
        cout<<"좌 상단 : "<<upLeft.x<<", ";
        cout<<upLeft.x<<"]"<<endl;
        cout<<"우 하단 : "<<lowRight.y<<", "; 
        cout<<lowRight.y<<"]"<<endl;
    }
};

int main(void) {
	Point pos1={-2,4};
    Point pos2={5,9};
    Reactangle rec={pos1,pos2};
    rec.ShowRecInfo();
	return 0;
}