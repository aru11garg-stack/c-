#include<iostream>
using namespace std;
int main(){

    int rows,cols;
    int count=0;
    cin>>rows>>cols;
    int arr[10][10];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j]; 
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]%2==0)
            {
                count++;
            }
        }
    }
    cout<<"Number of even elements: "<<count<<endl;
}