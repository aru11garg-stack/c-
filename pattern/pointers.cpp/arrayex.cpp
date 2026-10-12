#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
               //0,,1,,2,,3,,4
    int *p=arr;

    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*p+1<<endl;
    cout<<*(p+1)+10<<endl;
    cout<<*(p+2)+2<<endl;
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<(p+i)<<endl;
        cout<<*(p+i)<<endl;
    }
    cout<<(*p)+4<<endl;
    cout<<*(p+3)<<endl;
    cout<<*p<<endl;
    cout<<*p++<<endl;
}