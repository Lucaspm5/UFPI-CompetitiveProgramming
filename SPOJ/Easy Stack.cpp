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
    stack<int> p;
    while (t--) {
        int x; cin >> x;
        switch(x) {
        case 1:
            int y; cin >> y;
            p.push(y);
            break;
        case 2:
            if (sz(p) > 0)
                p.pop();
            break;
        default:
            if (sz(p) > 0)
                cout << p.top();
            else
                cout << "Empty!";
            cout << '\n';
        }
    }
    return 0;
}

