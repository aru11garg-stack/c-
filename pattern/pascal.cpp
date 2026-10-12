#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        int l=1;
        for(int j=1;j<=5-i;j++){
            cout<<" ";

        }
        for(int s=1;s<=i;s++){
            cout<<l<<" ";
            l=l*(i-s)/s;
        }
        cout<<endl;
    }
}