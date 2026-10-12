#include<iostream>
#include<cstdint>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter rows and cols: ";
    cin>>rows>>cols;

    int arr[10][10];

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
{
    cout<<"Enter rows["<<i<<"]["<<j<<"]";
    cin>>arr[i][j];
}   
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




}