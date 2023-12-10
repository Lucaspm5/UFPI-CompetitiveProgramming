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

inline int solve(string& s) {
    stack <int> p;
    int ans {};
    for (int i = 0;i < s.size();++i) {
        if (s[i] == '<') {
            p.push(s[i]);
        } else if (s[i] == '>' and !p.empty()) {
            p.pop();
            ++ans;
        } 
    }
    return {ans};
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    cin.ignore(1, '\n');
    while (t--) {
        string s; cin >> s;
        cout << solve(s) << '\n';
    }
    return 0;
}
