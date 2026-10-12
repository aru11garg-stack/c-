#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Key is: ";
    cin>>key;

    for( i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            break;
                }
            }
            if( arr[i]!=key){
                cout<<"Element not found";
            }
    
}