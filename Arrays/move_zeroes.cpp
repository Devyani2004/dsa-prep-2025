#include <iostream>
#include <vector>

using namespace std;

vector<int> move_Zeros(vector <int> &arr){

    int nzeroidx = 0;

    for(int i=0; i<arr.size(); i++){
       if(arr[i]!=0){
        arr[nzeroidx++]= arr[i];
       } 
    }

    for(int i= nzeroidx; i<arr.size(); i++){
        arr[i] =0;
    }

    return arr;
}

int main(){
    vector <int> arr= {0, 2, 02,2, 0, 0, 5, 6};
    vector <int> result= move_Zeros(arr);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
