#include<iostream>

using namespace std;

int addition(int a, int b){
    return a+b;
}

int subtraction(int a, int b){
    return a-b;
}

int multiplication(int a ,int b){
    return a*b;
}
int main(){
    int abc = 20;
    cout<<abc<<endl;
    cout<<addition(20,10);
    cout<<subtraction(20,10);
    return 0;
}