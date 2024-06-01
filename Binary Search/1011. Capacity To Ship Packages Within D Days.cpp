//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
class Solution {
public:
    bool solve(int w, vector<int> &x, int d) {
        long long sum = 0;
        int counter = 1;
        for(int i = 0;i < x.size();++i) {
            if (sum + x[i] > w) {
                sum = 0;
                if (++counter > d) return false;
            } 
            sum += x[i];
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long sum = 0;
        int _mx = 0;
        for(int i = 0;i < weights.size();++i) {
            sum += weights[i];
            _mx = max(_mx, weights[i]); 
        }
        long long l = _mx, r = sum;
        while(l < r) {
            int m = l + (r - l) / 2;
            solve(m, weights, days) ? r = m : l = m + 1;
        }
        return l;
    }
};
