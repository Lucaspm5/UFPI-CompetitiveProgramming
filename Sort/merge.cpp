#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x) cout << #x << " is " << x << '\n'

template <typename T>
inline void solve(int left, int right, vector<T> &x) {
    if (right - left > 0) {
        int middle = left + ((right - left) >> 1);

        solve(left, middle, x), solve(middle + 1, right, x);

        vector<T> prefix(middle - left + 1), sufix(right - middle);

        for (int i = left;i <= right;++i)
            (i <= middle) ? prefix[i - left] = x[i] : sufix[i - (middle + 1)] = x[i];

        int i = 0, j = 0, k = left;
        while(i < (int)prefix.size() or j < (int)sufix.size()) {
            if (j == (int)sufix.size() or (prefix[i] < sufix[j] and i < (int)prefix.size())) x[k++] = prefix[i++];
            else x[k++] = sufix[j++];
        }
    }
}

int main() { _
	vector<int> x {10, 10, 10, 1, 2, 3, 4, 1, 1, 2, 1, 1, 2, 3};
    solve(0, (int)x.size() - 1, x);
    for(auto & i: x)
        cout << i << ' ';
    return 0;
}
