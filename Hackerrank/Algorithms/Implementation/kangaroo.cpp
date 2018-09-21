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

bool solve(int a, int b, int c, int d) {
    // a + bx = c + dx
    // (a - c) = (d - b)x
    // x = (a - c) / (d - b)
    if (d == b) return false;
    return ((a - c) % (d - b) == 0 && (a - c) / (d - b) > 0);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (solve(a, b, c, d) ? "YES" : "NO") << endl;
    return 0;
}
