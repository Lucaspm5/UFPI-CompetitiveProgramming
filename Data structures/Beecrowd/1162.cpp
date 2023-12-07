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

vi aux;

inline int solve(vi& v, int l, int r) {
    int ans = 0;
    if (l < r) {
        int mid = (l + r) >> 1;
        ans += solve(v, l, mid);
        ans += solve(v, mid+1, r);

        int i, j = mid + 1, k;
        i = k = l;

        while((i <= mid) and (j <= r)) {
            aux[k++] = min(v[i], v[j]);
            if (aux[k - 1] == v[j]) {
                ++j;
                ans += (mid - i + 1);
            } else ++i;
        }
        while (i <= mid) aux[k++] = v[i++];
        while (j <= r) aux[k++] = v[j++];
        for (i = l; i <= r;i++) v[i] = aux[i];
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi v(n);
        aux.resize(n);
        for (int &x : v) cin >> x;
        int ans = solve(v, 0, n - 1);
        cout << "Optimal train swapping takes " << ans << " swaps." << '\n';
    }
    return 0;
}
