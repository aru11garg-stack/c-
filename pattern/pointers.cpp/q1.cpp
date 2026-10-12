#include<iostream>
using namespace std;
int main(){
    int x=10,y=20;
    int *p=&x;
    int **q=&p;
    *q=&y;//imp one pointer to pointer

    cout<<x<<" "<<*p<<" "<<**q<<endl;
    

}