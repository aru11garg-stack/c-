#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int target = 30;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (*(p + i) == target) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}