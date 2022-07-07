#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    if(100>=a) //100에서 90점까지는 A
        cout << "A";
    else if(90>a)//80에서 89 까지 B
        cout << "B";
    else if(80>a)
        cout << "C";
    else if(70>a)
        cout << "D";
    else 
        cout << "F";
    return 0;
}
//입력했을때 전부 F가 나오고있음