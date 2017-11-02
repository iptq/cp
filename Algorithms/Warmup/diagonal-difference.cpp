#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n], s = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> a[i][j];
        s += a[i][i] - a[i][n - i - 1];
    }
    cout << abs(s) << endl;
}
