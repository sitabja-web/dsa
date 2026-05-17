

#include<bits/stdc++.h>
using namespace std;



// for(rows) {

//     for(columns/spaces) {

//     }

//     cout << endl;
// }

//  this is the blue print 


// * * * *
// * * * *
// * * * *
// * * * *


// 4 rows
// Every row has 4 stars

// So:

// outer loop = rows
// inner loop = fixed stars

// for  (int i=1;i<=4;i++) {

//        //  outer loops for the rows

//     for(int j=1;j<=4;j++) {
//        //   inner loops for the stars 
//         cout<<"* ";
//     }

//     cout<<endl;
// }


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

*
* *
* * *
* * * *
* * * * *