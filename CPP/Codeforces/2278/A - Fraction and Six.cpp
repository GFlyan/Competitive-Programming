#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, m;
    cin >> t;
    while (t--) {
        unordered_map<char, int> s;
        unordered_map<char, bool> r;
        r.emplace('s', 0);
        r.emplace('i', 0);
        r.emplace('x', 0);
        cin >> n >> m;
        char c;
        while (n--) {
            cin >> c;
            if (s.count(c)) s[c]++;
            else s.emplace(c, 1);
        }
        bool a = true;
        while (m--) {
            cin >> c;
            bool x = s.count(c);
            if (x) {
                s[c]--;
                if (s[c] == 0) s.erase(c);
            } else a = false;
        }
        if (!a) {
            cout << "NO\n";
            continue;
        }
        for (auto [c, v]: s) {
            if (v > 1 || !r.count(c)) {
                a = false;
                break;
            }
            r.erase(c);
        }
        cout << (a && r.empty() ? "YES\n" : "NO\n") << "\n";
    }
    return 0;
}