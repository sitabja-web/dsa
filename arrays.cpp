// int arr[5]  =  {1,2 , 3, 5, 4}



#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v = {4, 2, 8, 1};

    v.push_back(10);

    sort(v.begin(), v.end());

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}


// Algorithm	Purpose
// sort()	Sort elements
// reverse()	Reverse vector
// find()	Search element
// count()	Count occurrences
// binary_search()	Binary search
// max_element()	Largest element
// min_element()	Smallest element



// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {

//     string s = "hello";

//     s.push_back('!');

//     transform(s.begin(), s.end(), s.begin(), ::toupper);

//     cout << s << endl;

//     return 0;
// }

