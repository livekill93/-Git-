//최대값
#include<iostream>
using namespace std;

int main (){
    ios::sync_with_stdio(false);//시간 줄이려고 추가 그러나 효과는 크게 없었음
    cin.tie(NULL); 
    cout.tie(NULL);
    int arr[9];
    int MAX=0,num=0;

    
    for(int i=0;i<9;i++){//i가 1이냐 0이냐에따라서 처리속도가 달라진다.
        cin >> arr[i];
        if(arr[i]>MAX){
            MAX = arr[i];
            num = i;
        }
    }
    cout << MAX << "\n"<< num+1 ;

    return 0;
}

//최대값구하기에는 sort(=array)를 사용할수있는데 이문제같이 면ㅊ번쨰 숫자구하는것에는 sort함수 사용이 어렵다.
//일단 되기는 되는데 제한시간이 1초라서 시간초과가 되기시작
//다른방법을 필요로 하는 모양
