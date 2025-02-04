#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x) cout << #x << " is " << x << '\n'

int main() { _

    int arr[5]; 
    iota(arr, arr + 5, 1);

    int prefix[5];
    fill(prefix, prefix + 5, 0);

    for (int i = 0;i < 5;++i) {
        prefix[i] = (i) ? prefix[i - 1] + arr[i] : arr[i];
        cout << prefix[i] << '\n';
    }

    return 0;
}
