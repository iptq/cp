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
    int n;
    cin >> n;
    int max;
    cin >> max;
    int min = max;
    int i, a = 0, b = 0, c;
    range(i, 0, n - 1, 1) {
        cin >> c;
        if (c > max) {
            max = c;
            a += 1;
        }
        if (c < min) {
            min = c;
            b += 1;
        }
    }
    printf("%d %d\n", a, b);
    return 0;
}
