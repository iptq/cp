#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long sum = 0, max = 0, min = 1000000001;
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        sum += n;
        if (n > max) max = n;
        if (n < min) min = n;
    }
    printf("%ld %ld\n", sum - max, sum - min);
}
