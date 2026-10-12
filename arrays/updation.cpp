#include <iostream>
using namespace std;

int main() {
    // Create and initialize an array of 5 integers
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    // Show original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Update value at index 2 (the 3rd element, which is 30) to 99
    int indexToUpdate = 2;
    int newValue = 99;
    arr[indexToUpdate] = newValue;

    // Show updated array
    cout << "Updated array:  ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
