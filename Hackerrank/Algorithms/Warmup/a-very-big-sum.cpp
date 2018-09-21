#include <bits/stdc++.h>
using namespace std;

#define int64 long long

int main() {
    int n;
    cin >> n;
    int64 a, s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        s += a;
    }
    cout << s << endl;
}
