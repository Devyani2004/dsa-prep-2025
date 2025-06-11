int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];
  
  	for(int i = 0; i < arr.size(); i++) {
    	int currSum = 0;
        for(int j = i; j < arr.size(); j++) {
        	currSum = currSum + arr[j];
            res = max(res, currSum);
        }
    }
    return res;
}

