class Solution {
  public:
    
    int maximumProfit(vector<int> &prices) {
            
            prices.push_back(-1);
            int ans = 0, v = prices.front(), p = -1;
            
            for (int i = 1;i < prices.size();++i) {
            
            	if (prices[i] < prices[i - 1]) {
            	    
            	    if (p != -1) {
            	        ans += (p - v);
            	        p = -1;
            	    }
            	        
            		v = prices[i];
            	} else p = prices[i];
            	
            	
            }
            
            return ans;
    }
};
