#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count=0;
    int arr[9]={90,98,67,69,12,26,33,44,50};
    for (int i =0;i<9;i++){
        if(arr[i]>x)
        count++;
    }
    cout<<count;
}