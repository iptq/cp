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

typedef tuple<bool, string> result;
#define mt make_tuple

result reduce(string s) {
    if (s.size() < 2) return mt(false, "");
    string n = "";
    int i;
    range(i, 1, s.size(), 1) {
        if (s[i] == s[i - 1]) {
            n += s.substr(i + 1);
            return mt(true, n);
        } else {
            n += s[i - 1];
        }
    }
    return mt(false, "");
}

int main() {
    string s;
    cin >> s;
    result r;
    while (get<0>(r = reduce(s))) {
        s = get<1>(r);
    }
    cout << (s == "" ? "Empty String" : s) << endl;
    return 0;
}
