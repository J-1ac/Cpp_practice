#include <iostream>
using namespace std;

void Add1(int &rep){
    rep++;
}

void ChangeSign(int &rep){
    rep*=-1;
}

int main(void){
    int num=10;
    Add1(num);
    cout<<"After Add1: "<<num<<endl;
    ChangeSign(num);
    cout<<"After ChangeSign"<<num<<endl;

    return 0;
}