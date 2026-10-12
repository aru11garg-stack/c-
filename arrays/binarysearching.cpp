#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int key;
    cout<<"Key to found";
    cin>>key;

    int low =0;
    int high = n-1;
    int mid;
    int i;
    while(low<=high){
        mid=(low+high)/2;
    
    if(arr[mid]==key){
        cout<<"Element found at index "<< mid;
        return 0;
    }
    else if(arr[mid]<key){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return 0;
}