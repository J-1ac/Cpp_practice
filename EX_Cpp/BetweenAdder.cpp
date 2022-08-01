#include <iostream>

int main(void){
    int val1,val2;
    int result=0;
    std::cout<<"두 개의 숫자입력 ";
    std::cin>>val1>>val2;               // 연속적인 입력 가능 (공백, 탭, enter로 구분)

    if(val1<val2){
        for(int i=val1+1;i<val2;i++){
            result+=i;
        }
    } else {
        for(int i=val2+1;i<val1;i++){
            result+=i;
        }
    }
    std::cout<<"두 수 사이의 정수 합: "<<result<<std::endl;
    return 0;
}