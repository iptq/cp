#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        if (m == 0) {
            c++;
        } else {
            (m > 0) ? (a++) : (b++);
        }
    }
    cout << (1.0 * a / n) << endl;
    cout << (1.0 * b / n) << endl;
    cout << (1.0 * c / n) << endl;
}
