#include<iostream>

namespace BestComImpl{
    void SimpleFunc();
}

namespace ProfComImpl{
    void SimpleFunc();
}

int main(){
    BestComImpl::SimpleFunc();
    ProfComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(){
    std::cout<<"func from BestCom"<<std::endl;
}

void ProfComImpl::SimpleFunc(){
    std::cout<<"func from ProfCom"<<std::endl;
}