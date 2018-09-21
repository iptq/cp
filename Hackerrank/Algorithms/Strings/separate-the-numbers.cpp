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

uint64 beautiful(string s) {
    int len;
    range(len, 1, 19, 1) {
        uint64 initial = stoll(s.substr(0, len)), exp, it = initial;
        string exps;
        int pos = len, explen;
        while (true) {
            exp = it + 1;
            exps = to_string(exp);
            explen = exps.size();
            if (pos >= s.size() || s.substr(pos).size() < explen) break;
            if (exps == s.substr(pos, explen)) {
                it = exp;
                pos += explen;
            } else
                break;
        }
        if (pos <= s.size() && s.substr(pos).empty() && it > initial)
            return initial;
    }
    return 0;
}

int main() {
    int i, q;
    uint64 b;
    cin >> q;
    string s;
    range(i, 0, q, 1) {
        cin >> s;
        if ((b = beautiful(s)) > 0) {
            cout << "YES " << b << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
