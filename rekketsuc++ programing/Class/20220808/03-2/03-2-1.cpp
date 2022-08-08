#include <iostream>

using namespace std;

class Calculator
{
    private:
    //멤버변수
        int numofadd;//+
        int numofmin;//-
        int numofmul;//*
        int numofdiv;///

    public:
    //멤버함수
    void Inti();
    double Add(double num1, double num2);//더하기 함수
    double Min(double num1, double num2);//빼기함수
    double Mul(double num1, double num2);//곱함수
    double Div(double num1, double num2);//나누기함수
    void ShowOpcount();//카운트

    /* data */
};

void Calculator::Inti(){
numofadd = 0;    
numofmin = 0;
numofmul = 0;
numofdiv = 0;
}
double Calculator::Add(double num1, double num2){
    numofadd++;
    return num1+num2;
}

double Calculator::Min(double num1, double num2){
    numofmin++;
    return num1-num2;
}

double Calculator::Mul(double num1, double num2){
    numofmul++;
    return num1*num2;
}

double Calculator::Div(double num1, double num2){
    numofdiv++;
    return num1/num2;
}

void Calculator::ShowOpcount(){
    cout<<"더하기 : "<<numofadd<< ' ';
    cout<<"빼기 : "<<numofmin<< ' ';
    cout<<"곱하기 : "<<numofmul<< ' ';
    cout<<"나누기하기 : "<<numofdiv<<endl;
}

int main(){
    Calculator cal;
    cal.Inti();
    cout<<"3.2 + 2.4 =" <<cal.Add(3.2,2.4)<<endl;
    cout<<"3.2 / 2.4 =" <<cal.Div(3.2,2.4)<<endl;
    cout<<"3.2 - 2.4 =" <<cal.Min(3.2,2.4)<<endl;
    cout<<"3.2 * 2.4 =" <<cal.Mul(3.2,2.4)<<endl;
return 0;
}
