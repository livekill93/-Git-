//객체배열
#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    private:
        char * name;
        int age;
    public:
        Person(char * myname, int myage){
            int len=strlen(myname)+1;
            name =new char[len];
            strcpy(nmae,_name);
            age = myage;
        }
        Person(){
            name=NULL;
            age=0;
            cout<<"called Person()"<<endl;
        }
        void SetPersonInfo(char * myname, int myage){
            name = myname;
            age = myage;
        }
        void ShoPersonInfo() const{
            cout<<"이름: "<<name<<", ";
            cout<<"나이: "<<age<<endl;

        }
        ~Person()
{
    delete []name;
    cout<<"called destructor!"<<endl;
}
};

int main(){
    Person parr[3];
    char namestr[100];
    char * strptr;
}