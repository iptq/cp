#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string curr = "";
    int longest = 0;
    for (int i = 0; i < n; ++i) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            curr += c;
            set<char> d;
            for (int j = 0, l = curr.size(); j < l; ++j) {
                d.insert(curr[j]);
            }
            if (d.size() > longest) longest = d.size();
        } else {
            curr = "";
        }
    }
    cout << longest << endl;
}
