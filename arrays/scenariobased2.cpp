#include<iostream>
using namespace std;
int main(){
    int arr[100]={101,102,104,105};
    int n=4;

    int ele;
    cout<<"Enter the roll no. to enter: ";
    cin>>ele;
    int pos;
    cout<<"Enter the index of roll no.: ";
    cin>>pos;

    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    n++;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}