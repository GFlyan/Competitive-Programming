#include <iostream>
#include <vector>
#define oo 1001

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, sv = oo, sp{}, a{};
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a < sv) sv = a;
            v.emplace_back(sv);
        }
        for (auto i: v) a += i;
        cout << a << "\n";
    }
    return 0;
}
