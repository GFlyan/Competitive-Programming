#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<vector<char>> g(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                g[i].emplace_back(c);
            }
        }
        for (int i = 0; i < m; i++) {
            int eplc = n-1;
            for (int j = n-1; j >= 0; j--) {
                if (g[j][i] == '*') swap(g[j][i], g[eplc--][i]);
                else if (g[j][i] == 'o') eplc = j - 1;
            }
        }
        for (auto p : g) {
            for (auto s: p) cout << s;
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
