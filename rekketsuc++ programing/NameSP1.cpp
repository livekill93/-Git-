#include<iostream>

namespace BestComImpl{
    void SimpleFunc(){
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}

namespace ProgComImpl{
    void SimpleFunc(){
        std::cout<<"progCom이 정의한 함수"<<std::endl;
    }
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}
