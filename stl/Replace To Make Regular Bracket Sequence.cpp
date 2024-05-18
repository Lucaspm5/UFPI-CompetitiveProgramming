// https://codeforces.com/contest/612/problem/C
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

string s;

unordered_map<char, char> mp {{')', '('}, {']', '['}, {'}', '{'}, {'>', '<'}};

inline int solve() {
    stack<char> st;
    int ans = 0;
    _for(c, s) {
        if (c == '(' or c == '[' or c == '{' or c == '<') st.push(c);
        else {
            if (st.empty()) return -1; 
            ans += (st.top() != mp[c]); 
            st.pop();
        }
    }
    return (st.empty() ? ans : -1);
}

int main() {
    cin >> s;
    int ans = solve();
    if (ans == -1) cout << "Impossible";
    else cout << ans;
    cout << '\n';
    return 0;
}
