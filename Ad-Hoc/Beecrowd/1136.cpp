#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define pb push_back
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int tested[91];

inline int solve(int n, int b, const vi& balls) {
    memset(tested, 0, sizeof(tested));
    for (int i = 0;i < b;++i) {
        for (int j = i;j < b;++j)
            tested[abs(balls[i] - balls[j])] = true;
    }
    for (int i = 0;i <= n;++i) {
        if (not tested[i]) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, b;
    while (cin >> n >> b, n) {
        vi balls(b, 0);
        for (int &x : balls) cin >> x;
        cout << (solve(n, b, balls) ? "Y" : "N") << '\n';
    }
    return 0;
}

