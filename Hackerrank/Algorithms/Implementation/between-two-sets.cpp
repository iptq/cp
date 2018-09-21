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

int gcf(const int &a, const int &b) {
    if (b == 0)
        return a;
    else
        return gcf(b, a % b);
}

int lcm(const int &a, const int &b) {
    int g = gcf(a, b);
    return a * b / g;
}

int main() {
    int i, n, m;
    seti a, b;
    int c;
    cin >> n >> m;
    range(i, 0, n, 1) {
        cin >> c;
        a.insert(c);
    }
    range(i, 0, m, 1) {
        cin >> c;
        b.insert(c);
    }
    int p = accumulate(a.begin(), a.end(), *a.begin(), lcm);
    int q = accumulate(b.begin(), b.end(), *b.begin(), gcf);
    c = 0;
    range(i, 1, q + 1, 1) {
        if (i % p == 0 && q % i == 0) c += 1;
    }
    cout << c << endl;
    return 0;
}
