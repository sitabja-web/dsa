#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {5, 2, 8, 1, 3};

    int n = 5;

//     sort(arr, arr + n);     this is the best way of sorting tc = 0(nlogn)

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//  vector way
// vector<int> v = {4, 1, 7, 2};

// sort(v.begin(), v.end());


#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {9, 5, 2, 8, 1, 7};

    // Sort from index 1 to index 4
    sort(arr + 1, arr + 5);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}