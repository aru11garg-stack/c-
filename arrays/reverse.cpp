#include<iostream>
using namespace std;
int main(){
    int arr[100]={1,2,3,4,5};
    int n=5;
    int i;

    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}