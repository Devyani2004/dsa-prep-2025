#include <iostream>
#include <vector>
using namespace std;

//int main(){
  //  int arr[] = {1, 90, 100, 99, 50};
    //int target = 51;
    //int n = sizeof(arr) / sizeof(arr[0]);

    //for(int i = 0; i < n; i++){
      //  for(int j = i + 1; j < n; j++){
        //    if(arr[i] + arr[j] == target){
          //      cout << "true" << endl;
            //    return 1;
              //  break;
           // }
      //  }
    //}

    //cout << "false" << endl;
    //return 0;
//}

bool twoSum(vector<int> &arr, int target){
    int left=0;
    int right= arr.size()-1;

    while(left< right){
        if(arr[right]+arr[left]== target){
            return true;
        }

        else if(arr[right]+arr[left]>target){
            right--;
        }

        else{
            left++;
        }

    }
    return false;
}

int main(){
    vector <int> array ={1, 2 ,3, 4, 5, 9};

    int target =13;

    cout<< twoSum(array , target)<<endl;
}

