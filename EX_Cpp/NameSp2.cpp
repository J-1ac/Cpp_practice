#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void);
}

namespace ProComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    ProComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void){
    std::cout<<"BestCom�� ������ �Լ�"<<std::endl;
}

void ProComImpl::SimpleFunc(void){
    std::cout<<"ProCom�� ������ �Լ�"<<std::endl;
}