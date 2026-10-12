#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int *p=arr;
    cout<<*p<<endl;
    cout<<(*p)++<<endl;
    cout<<*p<<endl;
    cout<<++(*p)<<endl;
    return 0;
}