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

const int magicsquares[8][9] = {
    {8, 1, 6, 3, 5, 7, 4, 9, 2}, {6, 1, 8, 7, 5, 3, 2, 9, 4},
    {4, 9, 2, 3, 5, 7, 8, 1, 6}, {2, 9, 4, 7, 5, 3, 6, 1, 8},
    {8, 3, 4, 1, 5, 9, 6, 7, 2}, {4, 3, 8, 9, 5, 1, 2, 7, 6},
    {6, 7, 2, 1, 5, 9, 8, 3, 4}, {2, 7, 6, 9, 5, 1, 4, 3, 8}};

int main() {
    int m[9], s, a = 10 * 9;
    for (int i = 0; i < 9; ++i) cin >> m[i];
    for (int i = 0; i < 8; ++i) {
        s = 0;
        for (int j = 0; j < 9; ++j) s += abs(magicsquares[i][j] - m[j]);
        a = min(a, s);
    }
    cout << a << endl;
    return 0;
}
