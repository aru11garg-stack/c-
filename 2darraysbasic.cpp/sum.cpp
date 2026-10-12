#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    int sum=0;
    int a[10][10];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
double avg=(double)sum/(rows*cols);
    cout<<"Sum of all elements: "<<sum<<endl;
    cout<<"Average of all elements: "<<avg<<endl;
}