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

