#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    private:
        char * name;
        int age;
    public:
        Person(char * myname, int myage)
        {
            int len=strlen(myname)+1;
            name = new char[len];
            strcpy(name, myname);
            age=myage;
        }
        void ShowPersonInfo() const
        {
            delete []name;
            cout<<"called destructor!"<<endl;
        }
};

int main(){

Person man1("Lee dong woo",29);
Person man2("jang dong gun",41);
man1.ShowPersonInfo();
man2.ShowPersonInfo();
}