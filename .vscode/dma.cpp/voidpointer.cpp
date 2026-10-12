#include<iostream>
using namespace std;
int main(){
    int a = 7;
    float b = 7.6;
    void *p;

    p = &a;
    cout<<"Value of a: "<<*(int*)p<<endl;

    p = &b;
    cout<<"Value of b: "<<*(float*)p<<endl;
    return 0;
}