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
    int n, x, k;
    cin >> n >> x >> k;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int b, c, p, q;
    set<pair<int, int> > sol;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (k == 0) {
                // printf("34: %d %d %d %d\n", i, j, a[i], a[j]);
                if (i == j && a[i] % x != 0) {
                    sol.insert(mp(i, i));
                } else if (a[i] == a[j] && a[i] % x != 0) {
                    sol.insert(mp(i, j));
                    sol.insert(mp(j, i));
                } else {
                    b = min(a[i], a[j]), c = max(a[i], a[j]);
                    if (b % x != 0 && c % x != 0 &&
                        b - (b % x) == c - (c % x)) {
                        if (a[i] < a[j])
                            sol.insert(mp(i, j));
                        else
                            sol.insert(mp(j, i));
                    }
                }
                continue;
            }
            if (i == j) {
                if (k == 1 && a[i] % x == 0) {
                    sol.insert(mp(i, i));
                }
            } else if (a[i] == a[j]) {
                if (k == 1 && a[i] % x == 0) {
                    sol.insert(mp(i, j));
                    sol.insert(mp(j, i));
                }
            } else {
                b = min(a[i], a[j]), c = max(a[i], a[j]);
                p = (b % x == 0) ? b : b + (x - b % x),
                q = (c % x == 0) ? c : c - (c % x);
                if (k == ((q - p) / x + 1)) {
                    if (a[i] < a[j])
                        sol.insert(mp(i, j));
                    else
                        sol.insert(mp(j, i));
                }
            }
        }
    }
    cout << sol.size() << endl;
    foreach (it, sol) {
        // printf("%d=%d, %d=%d\n", it->first, a[it->first], it->second,
        //    a[it->second]);
    }
    return 0;
}
