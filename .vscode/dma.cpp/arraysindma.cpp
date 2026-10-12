#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){ //  allocate an array  size     
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}