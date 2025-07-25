#include <iostream>
#include <vector>

using namespace std;


vector<int> insertionSort(vector<int> & arr)
{

    int n= arr.size();

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    return arr;
}


int main()
{
    vector <int> arr= { 121, 111, 113, 51, 16 };

    vector<int> sorted= insertionSort(arr);
    cout<<"The sorted array is: "<< endl;
        for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;
}
