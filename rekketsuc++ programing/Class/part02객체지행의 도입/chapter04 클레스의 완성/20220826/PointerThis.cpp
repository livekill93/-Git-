//this 포린터의 이해
//196p

#include<iostream>
#include<cstring>

using namespace std;

class SoSimple
{
    private:
        int num;
    public:
        SoSimple(int n) : num(n)
        {
            cout<<"num="<<num<<". ";
            cout<<"address="<<this<<endl;

        }

        void ShowSimpleDate()
        {
            cout<<num<<endl;
        }

        Sosimple * GetThisPointer()
        {
            return this;
        }
};

int main()
{
    SoSimple sim1(100);
    SoSimple * ptr1 = sim1.GetThisPointer();
    cout<<ptr1<<", ";
    ptr1 -> ShowSimpleDate();

    SoSimple sim2(200);
    SoSimple * ptr2 = sim2.GetThisPointer();
    cout<<ptr2<<", ";
    ptr2 ->ShowSimpleDate();
    
    return 0;

}