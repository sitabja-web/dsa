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

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;

    int digits = to_string(n).length();

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n = n / 10;
    }

    return sum == original;
}

int main() {
    int num;
    cin >> num;

    if (isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";

            if (i != n / i)
                cout << n / i << " ";
        }
    }
}

int main() {
    int num;
    cin >> num;

    printDivisors(num);

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int num;
    cin >> num;

    if (isPrime(num))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}