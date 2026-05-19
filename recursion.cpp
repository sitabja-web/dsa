// Recursion is a technique where a function calls itself to solve smaller subproblems.

// Basic Idea

// A recursive function has:

// Base Case → stopping condition
// Recursive Call → function calls itself

// Without a base case, recursion becomes infinite.



// #include <iostream>
// using namespace std;

// void fun(int n) {

//     if(n == 0)    this is the base case condition in rrcrusion we need the base case to stop the recursion otherwaie it will go on forever and cause stack overflow 
//         return;

//     cout << n << " ";

//     fun(n - 1);
// }

// int main() {
//     fun(5);
// }

// Function calls create a stack.

// For:

// fun(3)

// Calls happen like:

// fun(3)
//   -> fun(2)
//        -> fun(1)
//             -> fun(0)

// Then returning happens in reverse order.

// This uses the call stack.



1. Print Something N Times
Problem

Print a name/string N times using recursion.

Code
#include <iostream>
using namespace std;

void printName(int n) {

    if(n == 0)
        return;

    cout << "Rahul" << endl;

    printName(n - 1);
}

int main() {

    int n = 5;

    printName(n);
}
Time Complexity

O(n)

2. Print 1 to N Using Recursion
Code
#include <iostream>
using namespace std;

void print(int i, int n) {

    if(i > n)
        return;

    cout << i << " ";

    print(i + 1, n);
}

int main() {

    int n = 5;

    print(1, n);
}

Output:

1 2 3 4 5
3. Print N to 1 Using Recursion
Code
#include <iostream>
using namespace std;

void print(int n) {

//     if(n == 0)
//         return;

//     cout << n << " ";

//     print(n - 1);
// }

// int main() {

//     int n = 5;

//     print(n);
// }

// Output:

// 5 4 3 2 1
// 4. Sum of First N Numbers

// Mathematical formula:

// 1+2+3+⋯+n

// Recursive relation:

// sum(n)=n+sum(n−1)

// Code
// #include <iostream>
// using namespace std;

// int sum(int n) {

//     if(n == 0)
//         return 0;

//     return n + sum(n - 1);
// }

// int main() {

//     int n = 5;

//     cout << sum(n);
// }

// Output:

// 15
// 5. Factorial of a Given Number

// Formula:

// n!=n×(n−1)!

// Base case:

// 0!=1

// Code
// #include <iostream>
// using namespace std;

// int factorial(int n) {

//     if(n == 0)
//         return 1;

//     return n * factorial(n - 1);
// }

// int main() {

//     int n = 5;

//     cout << factorial(n);
// }

// Output:

// 120
// 6. Reverse an Array Using Recursion
// Code
// #include <iostream>
// using namespace std;

// void reverse(int arr[], int left, int right) {

//     if(left >= right)
//         return;

//     swap(arr[left], arr[right]);

//     reverse(arr, left + 1, right - 1);
// }

// int main() {

//     int arr[] = {1,2,3,4,5};

//     int n = 5;

//     reverse(arr, 0, n - 1);

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// Output:

// 5 4 3 2 1
// Time Complexity

// O(n)

// 7. Check if String is Palindrome

// Palindrome means:

// Reads same forward and backward

// Examples:

// MADAM
// NITIN
// Code
// #include <iostream>
// using namespace std;

// bool palindrome(string s, int left, int right) {

//     if(left >= right)
//         return true;

//     if(s[left] != s[right])
//         return false;

//     return palindrome(s, left + 1, right - 1);
// }

// int main() {

//     string s = "madam";

//     if(palindrome(s, 0, s.size() - 1))
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";
// }

// Output:

// Palindrome
// Time Complexity

// O(n)

// 8. Fibonacci Number

// Formula:

// F(n)=F(n−1)+F(n−2)

// Base cases:

// F(0)=0
// F(1)=1
// Code
// #include <iostream>
// using namespace std;

// int fib(int n) {

//     if(n <= 1)
//         return n;

//     return fib(n - 1) + fib(n - 2);
// }

// int main() {

//     int n = 6;

//     cout << fib(n);
// }

// Output:

// 8
// Fibonacci Sequence
// 0 1 1 2 3 5 8 13
// Fibonacci Complexity

// Naive recursion:

// O(2
// n
// )

// because of repeated recursive calls.

// Important Recursion Pattern

// Every recursion problem follows:

// if(base_case)
//     return;

// small work

// recursive_call(smaller_problem);
// Common Mistakes in Recursion
// Mistake	Problem
// Missing base case	Infinite recursion
// Wrong recursive step	Wrong output
// Large recursion depth	Stack overflow