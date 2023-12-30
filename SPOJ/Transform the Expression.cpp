#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define pf push_front
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() { _ 
    int t; cin >> t;
    while (t--) {
        string a; cin >> a;
        stack<char> p;
        for (auto &it : a) {
            if (isalpha(it))
                cout << it;
            else if (it == ')') {
                cout << p.top();
                p.pop();
            } else if (it != '(')
                p.push(it);
        }
        cout << '\n';
    }
    return 0;
}

