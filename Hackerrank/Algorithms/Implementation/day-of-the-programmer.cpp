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

int ndays[12] = {-1, -1, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int y;
    cin >> y;
    int i, d = 0, m = 1;
    range(i, 0, 255, 1) {
        d += 1;
        if (m == 1) {
            if (d > 31) {
                m += 1;
                if (y == 1918) {
                    d = 14;
                } else {
                    d = 1;
                }
            }
        } else if (m == 2) {
            bool leap = false;
            if (y < 1918) {
                leap = y % 4 == 0;
            } else {
                leap = ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
            }
            if ((leap && d > 29) || (!leap && d > 28)) {
                m += 1;
                d = 1;
            }
        } else {
            if (d > ndays[m]) {
                m += 1;
                d = 1;
            }
        }
    }
    printf("%02d.%02d.%04d\n", d, m, y);
    return 0;
}
