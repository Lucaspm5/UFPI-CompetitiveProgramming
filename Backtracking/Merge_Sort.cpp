#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x) cout << #x << " is " << x << '\n'

vector<int> x {1, 2, 3, 4, 1, 1, 2, 1, 1, 2, 3};

inline void solve(int left, int right) {
    if (left >= right) return;
    int middle = left + ((right - left) >> 1);

    solve(left, middle);
    solve(middle + 1, right);

    vector<int> prefix(middle - left + 1), sufix(right - middle);
    for(int i = left;i <= middle;++i) prefix[i - left] = x[i];
    for(int i = middle + 1;i <= right;++i) sufix[i - (middle + 1)] = x[i];
    int i = 0, j = 0, k = left;
    while(i < (int)prefix.size() or j < (int)sufix.size()) {
        if (j == (int)sufix.size() or (prefix[i] < sufix[j] and i < (int)prefix.size())) x[k++] = prefix[i++];
        else x[k++] = sufix[j++];
    }
}

int main() { _ 
    solve(0, (int)x.size() - 1);
    for(auto & i: x)
        cout << i << ' ';
    return 0;
}
