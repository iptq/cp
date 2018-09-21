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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    int min = 360;
    if (n == 1) {
        cout << 360 << endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        int k, sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += a[(i + j) % n];
            if ((k = abs(sum * 2 - 360)) < min) {
                min = k;
            }
        }
    }
    cout << min << endl;
    return 0;
}
