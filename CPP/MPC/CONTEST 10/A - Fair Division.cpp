#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, o{}, t{};
    cin >> n;
    vector<int> v;
    while (n--) {
        int value;
        cin >> value;
        if (value & 1) o++;
        else t++;
    }
    if (o*2 == t || o%2 == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int  t;
    cin >> t;
    while (t--) solve();
    return 0;
}