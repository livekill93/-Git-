#include <iostream>
#include<cstring>\

using namespace std;

class Printor{
    private:
    char str[30];
    public:
    void SetString(char * s);
    void Showstring();
    
};

void Printor::SetString(char * s){
    strcpy(str, s);
}
void Printor::Showstring(){
    cout<<str<<endl;
}

int main(){
    Printor pnt;
    pnt.SetString("Hello World!");
    pnt.Showstring();

    pnt.SetString("I Love C++");
    pnt.Showstring();
    return 0;
}