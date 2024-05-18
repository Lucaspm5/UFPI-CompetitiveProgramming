//https://judge.beecrowd.com/pt/problems/view/1520
// Prescisa de conhecimento prévio de ordenação
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

int main() {
    int n;
    while(cin >> n) {
        v(int) dx;
        FOR(i, 0, n) {
            int x, y; cin >> x >> y;
            FOR(j, x, y + 1) dx.pb(j);
        }
        int s; cin >> s;
        bool found = true;
        sort(all(dx));
        auto it = lower_bound(all(dx), s);
        if (it == dx.end() or dx[it - dx.begin()] != s) found = false;
        cout << s;
        if (found) {
            auto jt = upper_bound(all(dx), s);
            --jt;
            p(int, int) ans {it - dx.begin(), jt - dx.begin()};
            cout << " found from " << ans.f << " to " << ans.s;
        } else cout << " not found";
        cout << '\n';
    }
    return 0;
}
