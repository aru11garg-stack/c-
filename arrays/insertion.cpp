#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    int pos;
    cin>>pos;
    cout<<"Before insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for( int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    

    cout<<"After insertion :";
    for(int i=0;i<n+1;i++){
    cout<<arr[i];
    }
    cout<<endl;
}