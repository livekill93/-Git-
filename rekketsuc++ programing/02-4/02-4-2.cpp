#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(NULL));
    for(int i=0;i<5;i++){
        cout<<"RNG "<<i+1<<"# : "<<rand()%100<<endl;
    }
}

