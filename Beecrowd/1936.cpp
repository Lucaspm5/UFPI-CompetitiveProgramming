#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define pf push_front
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() { _ 
    vi fat {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800};
    int n; cin >> n;
    int j = sz(fat) - 1, ans = 0;
    for (int i = 0;i < sz(fat) and n;++i) {
        ans += n / fat[j];
        n %= fat[j];
        --j;
    }
    cout << ans << '\n';    
    return 0;
}

