#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,a,b=0,sum=0,original;
    cout<<"Enter a number :";
    cin>>n;

    original=n;
    while(n!=0){
        a=n%10;
        sum=sum+pow(a,4);
        n=n/10;
    }
    if(sum==original){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }
    cout<<sum;
    return 0;
}