#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    if(a>=90) //100에서 90점까지는 A
        {cout << "A";}
    else if(a>=80)//80에서 89 까지 B
        {cout << "B";}
    else if(a>=70)
       { cout << "C";}
    else if(a>=60)
        {cout << "D";}
    else 
       { cout << "F";}
    return 0;
}
//입력했을때 전부 F가 나오고있음
//수정해쓴ㄴ데 이번에는 A만 나오고있음
//입력 a가 앞에있어야 되는덧
// =< 이거는 안되는듯
//수정했는데 2번째랑 같은상황임
//{} 이거 없어서 혹시해봄
//변화없음
//if(a>=90) 형태로 변경함 a가 보다 작다보다는 무조건보타 크기형태로 바꾸어봄
