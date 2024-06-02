// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
class Solution {
public:
    using ll = long long;
    bool solve(vector<int> &bloomDay, ll days, ll k, ll m) {
        ll counter = 0, ans = 0;
        for(int i : bloomDay) {
            if (i > days) {
                counter = 0;
            } else {
                if (++counter == k) {
                    counter = 0;
                    if (++ans == m) return true;
                }
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        ll _mn = (int)1e9 + 7, _mx = 0;
        for (int i : bloomDay) {
            _mn = min(_mn, 1LL * i);
            _mx = max(_mx, 1LL * i);
        }
        ll l = _mn, r = _mx;
        while(l < r) {
            ll days = l + (r - l) / 2;
            solve(bloomDay, days, k, m) ? r = days : l = days + 1;
        }
        return ((ll)m * k > bloomDay.size() ? -1 : l);
    }
};
