#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;
    
    
    **q = 20;
    cout << a << " " << *p << " " << **q << endl;
    cout<<sizeof(*p)<<" "<<sizeof(**q)<<endl;
    return 0;
}

