#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3], b[3];
    for (int i = 0; i < 3; ++i) cin >> a[i];
    for (int i = 0; i < 3; ++i) cin >> b[i];
    int m = 0, n = 0;
    for (int i = 0; i < 3; ++i) {
        if (a[i] == b[i]) continue;
        (a[i] > b[i]) ? (m += 1) : (n += 1);
    }
    printf("%d %d\n", m, n);
}
