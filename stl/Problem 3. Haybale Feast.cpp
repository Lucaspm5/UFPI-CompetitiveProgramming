//https://usaco.org/index.php?page=viewproblem2&cpid=767
#define LOCAL

#include <bits/stdc++.h>
using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define pf push_front
#define f first
#define s second
#define v(i) vector<i>
#define p(i, j) pair<i, j>
#define m(i, j) map<i, j>
#define lb lower_bound
#define up upper_bound
#define MAX INT32_MAX
#define MIN INT32_MIN
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define _for(a, x) for(auto& a : x)
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using ll = long long;

ll n, m;

int main() { _
    freopen("hayfeast.in", "r", stdin);
    freopen("hayfeast.out", "w", stdout);
    cin >> n >> m;
    v(p(int, int)) x(n); FOR(i, 0, n) cin >> x[i].f >> x[i].s;
    ll sum = 0, l = 0, ans = (ll)1e18;
    deque<p(int, int)> dq;
    FOR(r, 0, n) {
        sum += x[r].f;
        
        while(sz(dq) and dq.back().f <= x[r].s) dq.pop_back();
        dq.pb({x[r].s, r}); 

        if (sum >= m) ans = min(ans, 1LL * dq.front().f);

        while(sum >= m) {
            if (sz(dq) and dq.front().s == l) dq.pop_front();
            sum -= x[l++].f;
        }
    }
    cout << ans << '\n';
    return 0;   
}
