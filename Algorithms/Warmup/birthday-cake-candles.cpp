#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, max = -1, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a > max) {
            max = a;
            count = 1;
        } else if (a == max) {
            count++;
        }
    }
    cout << count << endl;
}
