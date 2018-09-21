#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define range(i, L, R, step) for (i = L; i < R; i += step)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); ++it)
#define foreachr(it, l) for (auto it = l.rbegin(); it != l.rend(); ++it)
#define in(el, lst) (lst.find(el) != lst.end())

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
    int i, j, n, a, b;
    cin >> n;
    map<int, seti> m;
    vi r;
    range(i, 0, n, 1) {
        r.pb(i);
        range(j, 0, 6, 1) {
            cin >> a;
            m[a].insert(i);
        }
    }
    b = 0;
    int c;
    while (true) {
        if ((c = to_string(b).size()) > n) break;
        sort(r.begin(), r.end());
        do {
            bool f = true;
            range(a, 0, c, 1) {}
            if (!f) break;
            ++b;
            break;
        } while (next_permutation(r.begin(), r.begin() + c));
    }
    cout << n << endl;
    return 0;
}
