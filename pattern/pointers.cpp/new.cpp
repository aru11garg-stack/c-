#include<iostream>
using namespace std ;
int main(){

    int arr[]={10,20,30,40};
    int *p=arr;
    cout<< *p <<" ";
    cout<< *(p+1) <<" ";
    cout<< *p++ <<" ";
    cout<< *p <<" ";
}
