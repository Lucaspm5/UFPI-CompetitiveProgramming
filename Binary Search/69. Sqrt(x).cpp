// https://leetcode.com/problems/sqrtx/
class Solution {
public:
    int mySqrt(int x) {
        double l = 0.0, r = x;
        int temp = 100;
        while(temp--) {
            double m = l + (r - l) / 2;
            (m * m > x) ? r = m : l = m;
        }
        return floor((l + r) / 2);
    }
};
