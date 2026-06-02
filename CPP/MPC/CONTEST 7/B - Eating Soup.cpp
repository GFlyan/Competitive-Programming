#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i <= n; i++) v.emplace_back(i);

    int o = 1;
    int e = 2;
    while (m--) {
        int p = o;
        if(n >= o) o += 2;
        else {
            p = e;
            e += 2;
        }
        v[p] = 0;
    }

    int g{};
    bool sequence = false;
    for (auto i : v) {
        if(i && !sequence) g++;
        sequence = i;
    }

    cout << g << '\n';
    return 0;
}
