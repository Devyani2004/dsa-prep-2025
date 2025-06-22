// in bubble sort we compare the adjacent elements

#include <iostream>
#include <vector>

using namespace std;

vector <int> bubble_sort(vector <int> &arr){
    int n= arr.size();
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j = 0; j<n-i-j; j++){
            if(arr[j]> arr[j+1]){
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }

    }

    return arr;
}

int main(){
    vector<int> arr= {90, 78, 45, 23, 100};
    vector<int> sorted= bubble_sort(arr);
    cout<<"The sorted array is: "<< endl;
        for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;
}

    
