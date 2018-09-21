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

bool funny(string s) {
    auto a = s.begin();
    auto b = s.rbegin();
    int i;
    char a1, a2, b1, b2;
    range(i, 0, s.size() - 1, 1) {
        a1 = *(a++);
        b1 = *(b++);
        a2 = *a;
        b2 = *b;
        if (abs(a1 - a2) != abs(b1 - b2)) return false;
    }
    return true;
}

int main() {
    string s;
    int i, q;
    cin >> q;
    range(i, 0, q, 1) {
        cin >> s;
        cout << (funny(s) ? "Funny" : "Not Funny") << endl;
    }
    return 0;
}
