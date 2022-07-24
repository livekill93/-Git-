#include<iostream>

using namespace std;

int main(){
    int a;
    char arr[101];//배열
    int sum=0;
    cin>> a;
    for(int i=0;i<a;i++){
        cin>> arr[i];
        sum+=(int)arr[i]-48;//주의

    }
    cout << sum;


    return 0;
}
