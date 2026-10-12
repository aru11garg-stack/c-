#include <iostream>
#include<cstdint>
using namespace std;

int main() {
    int arr[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        

        cout<<"Address = "<<(uintptr_t)&arr[i][j]<<endl;

        cout << endl;
        }
    }
    return 0;
}