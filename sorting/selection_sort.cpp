// selection sort: in we swap the current element with the smallest element within that sub array

#include <iostream>
#include <vector>

using namespace std;

vector<int> selection_sort(vector <int> &arr){
    int n= arr.size();
    int temp;
    for(int i =0; i<n-1 ;i++){
        for(int j= i+1; j<n; j++){
            if(arr[i]> arr[j]){
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }

    return arr;
}

int main(){
    vector <int> arr = {12, 45, 68,23, 45,1, 2,3};
    vector<int> sorted = selection_sort(arr);
    cout << "Sorted array is: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;
}
