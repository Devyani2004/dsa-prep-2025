#include <iostream>
#include <vector>
using namespace std;

int Linear_Search(vector <int> &arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==target){
            return 1;
        }
    }

    return 0;


}

int main(){
    vector <int> arr = {1, 2, 3, 44, 89};
    int target = 89;

    cout<< Linear_Search(arr, target) <<endl;
}
