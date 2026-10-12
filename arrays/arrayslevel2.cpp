#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Enter marks of 5 students: ";
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    cout<<"Marks are:";
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }
}