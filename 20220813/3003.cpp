#include<iostream>
using namespace std;

int main(){
//체스판?
int p,l,q,b,k,n;
p=0;
l=0;
q=0;
b=0;
k=0;
n=0;

cin>>k>>q>>l>>b>>n>>p>>endl;
cout<<1-k<<' '<<1-q<<' '<<2-l<<' '<<2-b<<' '<<2-n<<' '<<8-p<<endl;

return 0;
}
//이게 왜되냐...