#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    cout << "Prefix sum array: ";
    for (int i = 0; i < n; ++i) {
        cout << prefix[i] << " ";
    }
    cout << endl;

    return 0;
}

