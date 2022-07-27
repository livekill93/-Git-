#include<iostream>

using namespace std;
void swap(int *a1,int *a2){
	int temp = *a1;
	*a1=*a2;
	*a2=temp;
}
void swap(char *a1,char *a2){
	int temp = *a1;
	*a1=*a2;
	*a2=temp;
}
void swap(double *a1,double *a2){
	int temp = *a1;
	*a1=*a2;
	*a2=temp;
}
int main(){
    int num1=20, num2=30;
    swap(&num1,&num2);
    cout<<num1<<' '<<num2<<endl;

    char ch1='A',ch2='Z';
    swap(&ch1,&ch2);
    cout<<ch1<<' '<<ch2<<endl;

    double dbl1=1.111,dbl2=5.555;
    swap(&dbl1,&dbl2);
    cout<<dbl1<<' '<<dbl2<<endl;

    return 0;
    
    }
