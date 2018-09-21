#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define range(i, L, R, step) for (i = L; i < R; i += step)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); ++it)
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
    int i, n;
    cin >> n;
    char c;
    int pos = 0, a = 0;
    range(i, 0, n, 1) {
        cin >> c;
        if (c == 'U') {
            pos += 1;
        } else if (c == 'D') {
            pos -= 1;
        }
        if (pos == 0) {
            if (c == 'U') a += 1;
        }
    }
    cout << a << endl;
    return 0;
}
