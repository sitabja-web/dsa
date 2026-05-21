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


// reverse a number 

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main() {
    int num;
    cin >> num;

    cout << reverseNumber(num);

    return 0;
}

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return original == rev;
}

int main() {
    int num;
    cin >> num;

    if (isPalindrome(num))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

