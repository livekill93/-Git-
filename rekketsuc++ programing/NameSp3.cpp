#include<iostream>

namespace BestComImpl{
    void SimpleFunc();
}

namespace BestComImpl{
    void PrettyFunc();
}

namespace ProfComImpl{
    void SimpleFunc();
}

int main(){
    BestComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(){
    std::cout<<"func from BestCom"<<std::endl;
    PrettyFunc();
    ProfComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(){
    std::cout<<"So pretty!!"<<std::endl;
  
}

void ProfComImpl::SimpleFunc(){
    std::cout<<"func from ProgCom"<<std::endl;
}
