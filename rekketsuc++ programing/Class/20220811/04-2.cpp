#include<iostream>

using namespace std;

class Point
{
private:
    /* data */
    int xpos,ypos;
public:
    void Init(int x, int y){
        xpos = x;
        ypos = y;
    }
    void ShowPointInfo() const{
        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
    }
};

class Ring{
private:
    /* data */
    int xpos,ypos,zpos;
public:
    void Init(int x, int y,int z){
        xpos = x;
        ypos = y;
        zpos = z;
    }
    void ShowPointInfo() const{
        cout<<"Inner Circle Info..."<<endl;
        cout<<"radius : "<<zpos<<endl;
        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
    }
};


int main(){
    Ring ring;
    ring.Init(1,2,4,2,2,9);
    ring.ShowPointInfo();
    return 0;
}
