#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, size = 4, amt = 0;
    unordered_map<int, bool> map;
    while (size--) {
        cin >> n;
        if (map.count(n))
            amt++;
        else
            map.emplace(n, true);
    }
    cout << amt << "\n";
}
