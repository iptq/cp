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
    int _, q;
    string s, ex;
    cin >> q;
    range(_, 0, q, 1) {
        cin >> s;
        ex = "hackerrank";
        auto p = ex.begin();
        foreach (c, s) {
            if (*c == *p) {
                p++;
            }
        }
        cout << (p == ex.end() ? "YES" : "NO") << endl;
    }
    return 0;
}
