#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void){
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}

namespace ProComImpl{
    void SimpleFunc(void){
        std::cout<<"ProCom이 정의한 함수"<<std::endl;
    }
}

int main(void){
    BestComImpl::SimpleFunc();
    ProComImpl::SimpleFunc();
    return 0;
}