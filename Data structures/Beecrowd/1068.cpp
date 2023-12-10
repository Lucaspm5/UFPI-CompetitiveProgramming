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

string s;

inline int solve() {
    stack <int> p;
    for (int i = 0;i < s.size();++i) {
        if (s[i] == '(') {
            p.push(s[i]);
        } else if (s[i] == ')') {
            if (p.empty()) return 0;
            else p.pop();
        } 
    }
    return {p.empty() ? 1 : 0};
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while (cin >> s)
        cout << (solve() ? "correct" : "incorrect") << '\n';
    return 0;
}
