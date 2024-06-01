// https://leetcode.com/problems/koko-eating-bananas/
class Solution {
public:
    bool solve(long long m, vector<int> &x, int h) {
        long long sum = 0;
        for(int dx : x) {
            sum += ((dx + (m - 1)) / m);
            if (sum > h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum = 0, _mn = 1e9 + 10;
        for(int dx : piles) {
            _mn = min(_mn, 1LL * dx);
            sum += dx;
        }
        long long l = 1, r = sum;
        while(l < r) {
            long long m  = l + (r - l) / 2;
            solve(m, piles, h) ? r = m : l = m + 1;
        }
        return l;
    }
};
