#include<iostream>
using namespace std;
int main(){
    int n;
    int x=25;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=x;
    n++;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
