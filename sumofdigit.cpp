#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number :";
    cin>>a; 
    if(a>0)
    {
        int sum=0;
        while(a!=0)
        {
            sum=sum+a%10;
            a=a/10;
        }
        cout<<"Sum of digits is :"<<sum;
    }
    else
    {
        cout<<"Sum of digits is : 0";
    }
}