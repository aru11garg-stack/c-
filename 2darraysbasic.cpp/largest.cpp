#include<iostream>
using namespace std;
int main(){

    int arr[10][10];
    int rows,cols;
    cin>>rows>>cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int smallest=arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<smallest){
                smallest=arr[i][j];
            }
        }
    }
    cout<<"Smallest element: "<<smallest<<endl;
}