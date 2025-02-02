#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x) cout << #x << " is " << x << '\n'

int main() { _

    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    auto solve = [&]() {
        int n = sizeof(arr) / sizeof(int), nz = 0;
        for (int i = 0;i < n;++i) {
            if (~arr[i] & 1) swap(arr[i], arr[nz++]);
        }
        for (int &i : arr)
            cout << i << '\n';
    };

    solve();

    return 0;
}
