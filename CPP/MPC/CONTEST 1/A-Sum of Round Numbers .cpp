#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> &v) {
    vector<int> n;

    for (auto i : v) {
        int a = i/10000*10000, b = i%10000/1000*1000, c = i%1000/100*100, d = i%100/10*10, e = i%10;
        if (a) n.emplace_back(a);
        if (b) n.emplace_back(b);
        if (c) n.emplace_back(c);
        if (d) n.emplace_back(d);
        if (e) n.emplace_back(e);
        cout << n.size() << "\n";
        for (auto j: n) {
            cout << j << " ";
        }
        cout << "\n";
        n.clear();
    }
}

int main() {
    int t, n;
    cin >> t;
    vector<int> v;
    while (t--) {
        cin >> n;
        v.emplace_back(n);
    }

    solve(v);

    return 0;
}
