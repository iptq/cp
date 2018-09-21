#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define range(i, L, R, step) for (i = L; i < R; i += step)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); ++it)

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

int main() {
    int i, n, a;
    cin >> n;
    mpii m;
    range(i, 0, n, 1) {
        cin >> a;
        if (m.find(a) == m.end()) {
            m[a] = 0;
        }
        m[a] += 1;
    }
    int p = -1, q;
    for (auto it = m.rbegin(); it != m.rend(); ++it) {
        if (it->second >= p) {
            p = it->second;
            q = it->first;
        }
    }
    cout << q << endl;
    return 0;
}
