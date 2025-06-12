class Solution {
  public:
    void convertToWave(vector<int>& arr) {
        
        int n = arr.size();
        
        for (int i = 0;i < n;i += 2) {
    		if (i + 1 < n and arr[i] < arr[i + 1]) 
    			swap(arr[i], arr[i + 1]);
    		if (i > 0 and arr[i] < arr[i - 1])
    			swap(arr[i], arr[i + 1]);
	    }
    }
       
};
