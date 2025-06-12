class Solution {
  public:
    int findUnique(vector<int> &arr) {
            
            unordered_map<int, int8_t> memo;
            
            for (int &i : arr) ++memo[i];
            
            for (auto &[i, j] : memo) if (j == 1) return i;
            
            return -1;
                    
    }
};
