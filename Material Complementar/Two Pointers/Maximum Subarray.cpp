#include <bits/stdc++.h>
using namespace std;

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

int main() { 
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vi x {-1, 2, -3, 4, 5};
    int sum1 = 0, ans1 = 0, sum2 = 0, ans2 = 0;
    // first example
    for (int i = 0;i < 5;++i) {
        sum1 = max(0, sum1 + x[i]);
        ans1 = max(ans1, sum1);
    }
    // second example
    for (int i = 0;i < 5;++i) {
        sum2 = max(x[i], sum2 + x[i]);
        ans2 = max(ans2, sum2);
    }
    if (ans1 > ans2) swap(ans1, ans2);
    cout << ( ans2 ) << '\n';
    return 0;
}
