#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[100][100];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < r; i++) {

        int largest = a[i][0];

        for(int j = 1; j < c; j++) {

            if(a[i][j] > largest) {
                largest = a[i][j];
            }

        }

        cout << "Largest in row " << i + 1
             << " = " << largest << endl;
    }

    return 0;
}