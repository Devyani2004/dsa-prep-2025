#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 90, 100, 99, 50};
    int target = 51;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << "true" << endl;
                return 1;
                break;
            }
        }
    }

    cout << "false" << endl;
    return 0;
}

