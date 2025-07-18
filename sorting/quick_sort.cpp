#include <iostream>
#include <vector>
using namespace std;



int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;       

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); 
    return i + 1; 
}


void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1);        
        quickSort(arr, pi + 1, high);       
    }
}


void printVector(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {101, 17, 81, 92, 41, 45};
    int n = arr.size();

    cout << "Original array: ";
    printVector(arr);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printVector(arr);

    return 0;
}
