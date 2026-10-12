#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int (*p)[3]=&arr;

    cout<<(*p)[0]<<" "<<(*p)[1]<<" "<<(*p)[2]<<endl;
    cout<<*(*p+0)+0<<" "<<*(*p+1)+1<<" "<<*(*p+2)+2<<endl;
    return 0;
}