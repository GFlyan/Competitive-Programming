#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, m, v, amt = 0;
    cin >> n >> m;
    unordered_map<int, bool> jack;
    while (n--) {
        cin >> v;
        jack.emplace(v, true);
    }
    while (m--) {
        cin >> v;
        if (jack.count(v))
            amt++;
    }

    cout << amt << "\n";

    return 0;
}
