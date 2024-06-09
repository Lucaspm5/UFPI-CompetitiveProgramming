// https://usaco.org/index.php?page=viewproblem2&cpid=690
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
#define FOR(i, a, b) for(int i = a; i < (b); ++i)
#define _for(a, x) for(auto& a : x)
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using ll = long long;

int n, t;

inline bool solve(v(int) &x, int m) {
    priority_queue<ll, v(ll), greater<ll>> pq;
    ll curr_time = 0;
    int i = 0;
    while(i < n or !pq.empty()) {
        if (i < n and sz(pq) < m) {
            pq.push(x[i] + curr_time);
            ++i;
        } else {
            curr_time += (pq.top() - curr_time);
            pq.pop();
        }
    }
    return curr_time <= t;
}

int main() { _
    freopen("cowdance.in", "r", stdin);
	  freopen("cowdance.out", "w", stdout);
    cin >> n >> t;
    v(int) x(n); _for(i, x) cin >> i;
    int l = 1, r = n;
    while(l < r) {
        int m = l + (r - l) / 2;
        solve(x, m) ? r = m : l = m + 1;  
    }
    cout << l << '\n';
    return 0;
}
