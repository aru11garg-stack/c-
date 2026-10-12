#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[10][10];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int j=0;j<cols;j++){
        for(int i=0;i<rows;i++){
            sum+=arr[i][j]; 
        }
        cout<<"Sum of column "<<j+1<<": "<<sum<<endl;
        sum=0;
    }
}    