#include<iostream>

using namespace std;



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
