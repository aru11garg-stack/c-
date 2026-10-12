#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos=3;
    int x=25;

    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    n++;

    cout<<"After insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
