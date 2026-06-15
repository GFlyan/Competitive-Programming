#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, d{};
    string w;
    cin >> n;
    unordered_map<string, int> map;
    while (n--) {
        string s;
        cin >> s;
        if (!map.count(s)) map.emplace(s, 1);
        else map[s]++;
    }
    for (auto [a, b]: map) {
        if (b > d) {
            d = b;
            w = a;
        }
    }
    cout << w << "\n";
    return 0;
}