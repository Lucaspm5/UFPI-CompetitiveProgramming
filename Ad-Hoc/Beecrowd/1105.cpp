#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 2 << 17;

int main() { no_tle_pls
    size_t B, N; 
    while (cin >> B >> N, B) {
        vi bancos(B);
        for (int &x : bancos) cin >> x;
        while (N--) {
            size_t D, C, V; cin >> D >> C >> V;
            bancos[D-1] -= V; bancos[C-1] += V;
        }
        size_t ans = 1;
        for (int i = 0;i < (int)bancos.size() and ans;++i) {
            if (bancos[i] < 0) ans = 0;
        }
        cout << (ans ? "S" : "N") << '\n';
    }
    return 0;
}
