#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void){
        std::cout<<"BestCom�� ������ �Լ�"<<std::endl;
    }
}

namespace ProComImpl{
    void SimpleFunc(void){
        std::cout<<"ProCom�� ������ �Լ�"<<std::endl;
    }
}

int main(void){
    BestComImpl::SimpleFunc();
    ProComImpl::SimpleFunc();
    return 0;
}