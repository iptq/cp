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

int Q, n, m, cl, cr, a, b;
map<int, seti> roads;

int64 dfssearch(int i, bool *v) {
    v[i] = true;
    int total = 1;
    foreach (it, roads[i]) {
        if (!v[*it])
            total += dfssearch(*it, v);
    }
    return total;
}

int main() {
    cin >> Q;
    for (int q = 0; q < Q; ++q) {
        cin >> n >> m >> cl >> cr;
        bool v[n];
        memset(v, 0, sizeof(v));
        for (int i = 0; i < m; ++i) {
            cin >> a >> b;
            roads[a].insert(b);
            roads[b].insert(a);
        }
        if (cl < cr) {
            cout << cl * n << endl;
        } else {
            int64 cost = 0, nodes;
            for (int i = 1; i <= n; ++i) {
                if (!v[i]) {
                    nodes = dfssearch(i, v);
                    // printf("nodes:%lld\n", nodes);
                    cost += (nodes - 1) * cr + cl;
                }
            }
            cout << cost << endl;
        }
    }
}
