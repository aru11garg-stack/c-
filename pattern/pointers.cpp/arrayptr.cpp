#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    
    cout << *ptr << " ";
    cout << *(ptr + 1) << " ";
    cout << *ptr++ << " ";
    cout << *ptr << " ";
    return 0;
}

