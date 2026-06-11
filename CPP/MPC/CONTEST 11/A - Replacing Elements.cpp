#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        vector<int> a;
        bool flag{};
        cin >> n >> d;
        while (n--) {
            int v;
            cin >> v;
            a.emplace_back(v);
            if (v > d) flag = true;
        }
        if (!flag) cout << "YES\n";
        else {
            sort(a.begin(), a.end());
            cout << (a[0] + a[1] <= d ? "YES\n" : "NO\n");
        }
    }
    return 0;
}