#include <iostream>
using namespace std;

int main() {
    int a, b, f, k;
    cin >> a >> b >> f >> k;
    if (b < a) {
        cout << -1 << endl;
        return 0;
    }
    int p = 0, r = 0;
    while (true) {
        int nf;
        if (p > f) {
            nf = a + a - f;
        } else {
            nf = f;
        }
    }
}
