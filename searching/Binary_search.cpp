#include <iostream>
#include <vector>
using namespace std;
int Binary_search(vector<int> arr, int target){
     int n = arr.size();

    int left=0;
    int right= n-1;

    while(left<=right){

        int mid=(left+right)/2;

        if(arr[mid]== target){
            return mid;
        }

        else if (arr[mid]<target)
        {
            
            left= mid+1;
        }

        else{
            right= mid-1;
        }
        
    }

    return -1;
}


int main(){
    vector <int> arr= {1, 2, 3,4 , 5,6 ,7, 9};

    int target= 9;

    cout<<Binary_search(arr, target) <<endl;
}
