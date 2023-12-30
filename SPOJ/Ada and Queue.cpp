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
    deque <int> f;
    bool sentry = false;
    while (t--) {
        string a; cin >> a;
        if (a == "toFront") {
            int x; cin >> x;
            cin.ignore();
            (!sentry) ? f.push_front(x) : f.pb(x);
        }
        else if (a == "push_back") {
            int x; cin >> x;
            cin.ignore();
            (!sentry) ? f.pb(x) : f.push_front(x);
        }
        else if (a == "front") {
            if (!sentry) {
                if (sz(f) > 0) {
                    cout << f.front();
                    f.pop_front();
                } else
                    cout << "No job for Ada?";
            } else {
                if (sz(f) > 0) {
                    cout << f.back();
                    f.pop_back();
                } else
                    cout << "No job for Ada?";
            }
            cout << '\n';
        }
        else if (a == "back") {
            if (!sentry) {
                if (sz(f) > 0) {
                    cout << f.back();
                    f.pop_back();
                } else
                    cout << "No job for Ada?";
            } else {
                if (sz(f) > 0) {
                    cout << f.front();
                    f.pop_front();
                } else
                    cout << "No job for Ada?";
            }
            cout << '\n';
        } else sentry = !sentry;
    }
    return 0;
}

