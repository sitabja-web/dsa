//  intro to  dsa 



// time complexity how the execution time of an algorithm changes as the size of the input changes 


//  space complexity how the memory usage of an algorithm changes as the size of the input changes 

// asymptotic notation =>  the  mathematial notation used to describe the behaviour of ann algorithm as the input size grows 



//  there are 3 parts => average case=> the expected time taken by an algorithm for a random input of size n
//  best case => the minimum time taken by an algorithm for any input of size n
// worst case => the maximum time taken by an algorithm for any input of size n

//  big O notation =>  used to describe the upper bound of an algorithm's time complexity
//  big omega notation => used to describe the lower bound of an algorithm's time complexity
//  big theta notation => used to describe the tight bound of an algorithm's time complexity


// 0(1)=> constant time => the execution time of an algorithm does not depend on the size of the input
// 0(log n) => logarithmic time => the execution time of an algorithm increases logarithmically
// 0(n) => linear time => the execution time of an algorithm increases linearly with the size of the input
// 0(n log n) => linearithmic time => the execution time of an algorithm increases as n log n
// 0(n^2) => quadratic time => the execution time of an algorithm increases quadratically with the size of the input
// 0(2^n) => exponential time => the execution time of an algorithm increases exponentially with the size of the input
// 0(n!) => factorial time => the execution time of an algorithm increases factorially with the size



// examle of various time complexities 

// 1.linear time complexity
// void linearTimeComplexity(int n) {
//     for (int i = 0; i < n; i++) {
//         cout << i << " ";
//     }
// }

// 2.logarithmic time complexity
// void logarithmicTimeComplexity(int n) {
//     for (int i = 1; i < n; i *= 2) {
//         cout << i << " ";
//     }
// }

// 3. quadratic time complexity
// void quadraticTimeComplexity(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << i << " " << j << " ";
//         }
//     }
// }

// 4. exponential time complexity
// void exponentialTimeComplexity(int n) {
//     if (n == 0) {
//         cout << "Base case reached" << endl;
//         return;
//     }
//     cout << "Current value of n: " << n << endl;
//     exponentialTimeComplexity(n - 1);
//     exponentialTimeComplexity(n - 1);
// }

// 5. factorial time complexity
// void factorialTimeComplexity(int n) {
//     if (n == 0) {
//         cout << "Base case reached" << endl;
//         return;
//     }
//     cout << "Current value of n: " << n << endl;
//     for (int i = 0; i < n; i++) {
//         factorialTimeComplexity(n - 1);
//     }
// 

// 6. constant time complexity
// void constantTimeComplexity() {
//     cout << "This function runs in constant time." << endl;
// }

// space  complexity tells you how much e memroy an algorthim  uses as the  size of the input changes
//  space complexity is the summation of input szie + auxillary space used by the algorithm 

//intput size => meory used to store the inout data
// auxiillary sapce> memory used by the algorithm to perform its operations 

// 0(1) => constant space => the memory usage of an algorithm does not depend on the size of the input
// 0(n) => linear space => the memory usage of an algorithm increases linearly with
// the size of the input
// 0(n^2) => quadratic space => the memory usage of an algorithm increases quadratically with the size of the input
// 0(2^n) => exponential space => the memory usage of an algorithm increases
// exponentially with the size of the input

