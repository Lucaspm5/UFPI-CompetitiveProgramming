#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x) cout << #x << " is " << x << '\n'

// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

int main() { _

    vector<int> a {-9, -4, -1, -1, 0, 0, 5, 6, 8}, b {-7, -7, -6, -5, 4, 5};

    auto merge = [&]() -> vector<int> {

        int ptr1 = 0, ptr2 = 0, n = int(a.size()), m = int(b.size());

        vector<int> res;

        while (ptr1 < n or ptr2 < m) {

            if (ptr2 == m or (ptr1 < n and a[ptr1] <= b[ptr2])) {
                if ((not res.empty() and res.back() != a[ptr1]) or res.empty())
                    res.push_back(a[ptr1]);
                ++ptr1;
                while (ptr1 < n and a[ptr1] == a[ptr1 - 1]) ++ptr1;
            } else {
                if ((not res.empty() and res.back() != b[ptr2]) or res.empty())
                    res.push_back(b[ptr2]);
                ++ptr2;
                while (ptr2 < m and b[ptr2] == b[ptr2 - 1]) ++ptr2;
            }
        }

        return res;

    };

    for (int &i : merge())
        cout << i << ' ';

    return 0;
}
