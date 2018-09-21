#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, r;
    cin >> n;
    map<int, int> d;
    for (int i = 0; i < n; ++i) {
        cin >> r;
        if (d.find(r) != d.end()) {
            d[r]++;
        } else {
            d[r] = 1;
        }
    }
    if (d.size() == 2) {
        auto it = d.begin();
        int a = it->first;
        int b = (it++)->second;
        int c = it->first;
        int d = it->second;
        if (b == d) {
            cout << "YES" << endl;
            cout << a << " " << c << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}
