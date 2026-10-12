#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int arr[100]={1,2,3,4,5};
    int n=5;

    swap(arr[0],arr[n-1]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}