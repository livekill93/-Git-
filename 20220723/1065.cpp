#include<iostream>

using namespace std;



int cd(int a){
    if(a<100)
        return true;
        int a1,a2,a3;
        a3 = a/100;
        a1 = a% 10;
        a2= a%100/10;
        if(a3-a2 ==a2-a1)
            return true;
        return false;
}

int main(){
    int N, cnt = 0;

    cin >> N;
    for(int i=1;i<=N;i++){
        if(cd(i))
        cnt++;
    }





cout << cnt << endl;

return 0;

}