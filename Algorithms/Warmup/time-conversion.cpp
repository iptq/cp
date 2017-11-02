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
    // main code
    char c0, c1, co;
    int H, h, m, s;
    cin >> c0 >> c1 >> co;
    h = (c0 - '0') * 10 + (c1 - '0');
    cin >> c0 >> c1 >> co;
    m = (c0 - '0') * 10 + (c1 - '0');
    cin >> c0 >> c1;
    s = (c0 - '0') * 10 + (c1 - '0');
    cin >> c0 >> c1;
    if (c0 == 'A' && h == 12) {
        H = 0;
    } else if (c0 == 'P' && h == 12) {
        H = 12;
    } else if (c0 == 'P') {
        H = h + 12;
    } else {
        H = h;
    }
    printf("%02d:%02d:%02d\n", H, m, s);
    return 0;
}
