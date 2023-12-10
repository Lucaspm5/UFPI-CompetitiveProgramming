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
 
map <char, char> open {{')', '('}, {']', '['}, {'}', '{'}, {'>', '<'}};
 
inline int solve(string &s) {
    stack<int>p;
    int ans {};
    for(char &c : s) {
        switch(c) {
            case '(':
            case '[':
            case '{':
            case '<':
                p.push(c);
                break;
            default:
                if (p.empty()) return -1;
                ans += (open[c] == p.top() ? 0 : 1);
                p.pop();
        }
    }
    return {p.empty() ? ans : -1};
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    if (solve(s) != -1) cout << solve(s);
    else cout << "Impossible";
    cout << '\n';
    return 0;
}
