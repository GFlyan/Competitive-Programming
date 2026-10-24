#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int s, n, x, y;
    bool flag = true;
    cin >> s >> n;
    vector<pair<int, int>> v;
    while (n--) {
        cin >> x >> y;
        v.emplace_back(x, y);
    }
    sort(v.begin(), v.end());
    for (auto [ds, db]: v) {
        if (s > ds) s += db;
        else {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << "\n";
    return 0;
}