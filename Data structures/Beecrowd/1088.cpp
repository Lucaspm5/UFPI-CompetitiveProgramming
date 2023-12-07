#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
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

inline int mergeSort(const vi& v, int l, int r) {
    int ans = 0;
    if (l < r) {
        int mid = (r + l) >> 1;
        ans += mergeSort(v, l, mid);
        ans += mergeSort(v, mid + 1, r);

        for (int i = l; i <= r;++i) aux[i] = v[i];

        int i = l, j = mid + 1, k = l;
        while ((i <= mid) and (j <= r)) {
            aux[k++] = min(v[i], v[j]);
            if (aux[k - 1] == v[i]) {
                ++i;
                ans += (j - mid);
            } else ++j;
        }
        while (i <= mid) {
            aux[k++] = v[i++];
            ans += (i - mid); 
        }
        while (j <= r) aux[k++] = v[j++];
    }
    return ans;
}

int main() {
    int n;
    while (cin >> n, n) {
        vi v(n);
        aux.resize(n);
        for (int &x : v) cin >> x;
        int ans = mergeSort(v, 0, n - 1);
        cout << (~ans & 1 ? "Marcelo" : "Carlos") << '\n';
    }
    return 0;
}
