#include<iostream>

int main(){
    int val1,val2;
    int result;
    std::cout<<"input 2 number : ";
    std::cin>>val1>>val2;

    if(val1<val2){
        for(int i = val1+1; i<val2 ;i++)
            result+=i;

    }
    else{for(int i = val2+1; i<val1 ;i++)
            result+=i;

    }
    std::cout<<"sum of 2 number : "<<result << std:: endl;
    return 0;
}
