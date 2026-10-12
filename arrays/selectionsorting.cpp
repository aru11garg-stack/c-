#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int SI=i;
        for( j=i+1;j<n;j++){
            if(arr[j]<arr[SI]){
            SI=j;
        }
        }
        swap(arr[i] ,arr[SI]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}