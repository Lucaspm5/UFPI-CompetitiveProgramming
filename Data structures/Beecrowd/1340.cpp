#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;

void solve(int n) {
    bitset<3> c;
    queue<int> fila;
    stack<int> pilha;
    priority_queue<int> fila_p;
    while(n--) {
        int a, b; cin >> a >> b;
        if (a == 1) {
            fila.push(b), pilha.push(b), fila_p.push(b);
        } else {
            if (fila.front() != b) c[0] = 1;
            if (pilha.top() != b) c[1] = 1;
            if (fila_p.top() != b) c[2] = 1;
            fila.pop(), pilha.pop(), fila_p.pop();
        }
    }
    if (c.count() > 2) cout << "impossible";
    else if (c.count() == 1 or c.count() == 0) cout << "not sure";
    else {
        cout << (not c[0] ? "queue" : (not c[1] ? "stack": "priority queue"));
    }
    c[0] = c[1] = c[2] = 0;
}

int main() { no_tle_pls
    int n;
    while (cin >> n) {
        solve(n);
        cout << '\n';
    }
    return 0;
}
