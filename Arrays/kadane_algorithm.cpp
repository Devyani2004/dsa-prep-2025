
#include <iostream>
#include <vector>

using namespace std;

int kadane_algo(vector <int> &arr){
    int res = arr[0];
    int Max_End = arr[0];

    for(int i=0; i<arr.size(); i++ ){

        Max_End= max(Max_End+ arr[i], arr[i]);

        res= max(res, Max_End);
    }

    return res;
}

int main(){
    vector <int> arr= {1, 2, 3, 4, -1, -20, 30};

    cout<< kadane_algo(arr)<<endl;
}
