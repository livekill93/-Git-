#include<iostream>

namespace Mylog
{
    void ChatFunc();

}

namespace Friendslog{
    void ChatFunc();
}

int main(){

    Mylog::ChatFunc();
    Friendslog::ChatFunc();

    return 0;

}

void Mylog::ChatFunc(){
    std::cout<<"why is he there?"<<std::endl;
}

void Friendslog::ChatFunc(){
    std::cout<<"who knows?"<<std::endl;
}