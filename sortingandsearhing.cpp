#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {5, 2, 8, 1, 3};

    int n = 5;

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//  vector way
vector<int> v = {4, 1, 7, 2};

sort(v.begin(), v.end());