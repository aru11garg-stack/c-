#include <iostream>
using namespace std;

bool isPerfectNumber(int n) {
    if (n <= 1) return false;
    
    int sum = 1; // 1 is a divisor of every number > 1
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectNumber(num))
        cout << num << " is a Perfect Number." << endl;
    else
        cout << num << " is not a Perfect Number." << endl;

    return 0;
}

