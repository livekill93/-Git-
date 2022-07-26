#include<iostream>//아스키코드 관련문제임
#include<cstdio>
#include<string>

using namespace std;

int main(){
    string alphabet;
    int arr[26] ={0};
    int len,max = 0,maxalpha =0, multialpha = 0;

    getline(cin, alphabet,'\n');
    len =alphabet.length();
//getline(istream& is, string str,char dlim); 겟라인함수
   
    
    for(int i='A';i<='Z';i++){
        for(int j= 0;j<len;j++){
            if(alphabet.at(j) == i){
                arr[i-65]++;
            }
        }
    }

    for(int i='a';i<='z';i++){
        for(int j=0;j<len;j++){
            if(alphabet.at(j)==i){
                arr[i-97]++;
            }
        }
    }

    for(int i= 'A';i<='Z';i++){
        if(max < arr[i-65]){
            max =arr[i-65];
            maxalpha = i;
        }
    }
    for(int i='A';i<='Z';i++){
        if(max == arr[i-65])
        multialpha++;
    }

    if(multialpha == 1)
        printf("%c\n", maxalpha);
       
    else
        cout<< "?"<<endl;

    return 0;
}
