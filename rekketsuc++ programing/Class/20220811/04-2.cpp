#include<iostream>

using namespace std;

class point{
private:
    /* data */
    int xpos,ypos;

    public:
    void Init(int x, int y){
        xpos = x;
        ypos = y;
    }
    void ShowPointInfo() const{
        cout<<"["<<apos<<","<<bpos<<"]"<<endl;
    }
};

class Circle{
    private:
    int rad;
    point center;
    
    public:
       void Init(int x, int y,int r){
        rad = r;
        center.Init(x,y);
    }
    void ShowCircleInfo() const{
        cout<<"radius : "<<rad<<endl;
        center.ShowPointInfo();
    }
};


class Ring{
private:
    /* data */
    int xpos,ypos,zpos;
    int apos,bpos,cpos;
public:
    void Init(int x, int y,int z,int a,int b,int c){
        xpos = x;
        ypos = y;
        zpos = z;
        apos = a;
        bpos = b;
        cpos = c;
    }
    void ShowPointInfo() const{
        cout<<"Inner Circle Info..."<<endl;
        cout<<"radius : "<<zpos<<endl;
        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
        cout<<"Outter Circle Info..."<<endl;
        cout<<"radius : "<<cpos<<endl;
        cout<<"["<<apos<<","<<bpos<<"]"<<endl;
    }
};


int main(){
    Ring ring;
    ring.Init(1,2,4,2,2,9);
    ring.ShowPointInfo();
    return 0;
}
