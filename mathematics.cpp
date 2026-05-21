#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;

    while (n > 0) {
        count++;
        n = n / 10;
    }

    return count;
}

int main() {
    int num;
    cin >> num;

    cout << countDigits(num);

    return 0;
}