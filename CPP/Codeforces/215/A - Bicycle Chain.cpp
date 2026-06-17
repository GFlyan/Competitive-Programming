#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, ans{}, r{};
    cin >> a;
    vector<int> vA, vB;
    while (a--) {
        int v;
        cin >> v;
        vA.emplace_back(v);
    }
    cin >> b;
    while (b--) {
        int v;
        cin >> v;
        vB.emplace_back(v);
    }
    for (auto bj : vB) {
        for (auto ai: vA) {
            if ((double)bj/ai-bj/ai == 0) {
                if (bj/ai > r) {
                    r = bj/ai;
                    ans = 1;
                } else if (bj/ai == r) ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}