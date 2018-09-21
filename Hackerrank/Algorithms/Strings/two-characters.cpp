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

int valid(string s, char a, char b) {
    int i, l = 0;
    char c = -1;
    range(i, 0, s.size(), 1) {
        if (s[i] != a && s[i] != b) continue;
        if (c == -1) {
            c = s[i];
            l++;
            continue;
        }
        if (s[i] == c) return 0;
        c = s[i];
        l++;
    }
    return l;
}

int main() {
    int i, n;
    char a;
    cin >> n;
    string s;
    set<char> c;
    range(i, 0, n, 1) {
        cin >> a;
        s += a;
        c.insert(a);
    }
    if (s.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    int m = 0, f;
    foreach (i, c) {
        foreach (j, c) {
            if ((f = valid(s, *i, *j)) > 0) {
                m = max(m, f);
            }
        }
    }
    cout << m << endl;
    return 0;
}
