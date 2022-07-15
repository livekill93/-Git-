#include<iostream>
using namespace std;
int main (){
    int a;

    cin >> a;

    int min=1000000;
    int max=-1000000; //이부분에 주의

    int arr[a+1]; //array
    for(int i=0;i<a;++i){

        cin >> arr[i];
        if(arr[i]>max){ //arr값이 max보다 크면 그값을 max에 저장
            max = arr[i];
        }
        if(arr[i]<min){//arr값이 min보다 작으면 그값을min에 저장
            min = arr[i];
        }

    }
    cout << min << " " << max ;
    

    return 0;
}
