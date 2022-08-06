#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char *str1="ABC123";
    char *str2="DEF456";
    char str3[50];
    char str4[50];
	
	cout<<"1. check str "<<endl;
	
	cout<<"str2: "<<str2<<endl;
	cout<<"str1: "<<str1<<endl;
	
    cout<<strlen(str1)<<endl;
    cout<<strlen(str2)<<endl;
    
    strcpy(str3 , str1);
    strcpy(str4, str2);
    
    cout<<"2.check str "<<endl;
    cout<<"str4: "<<str4<<endl;
	cout<<"str3: "<<str3<<endl;
	cout<<"str2: "<<str2<<endl;
	cout<<"str1: "<<str1<<endl;
    if(strcmp(str1,str2)==0)
        cout<<"same length of word"<<endl;
    else    
        cout<<"un same length of word"<<endl;
    return 0;

}
