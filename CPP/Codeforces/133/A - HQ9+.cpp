#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, bool> map;
    map.emplace('H', true);
    map.emplace('Q', true);
    map.emplace('9', true);
    string s;
    cin >> s;
    int a{};
    for (auto c: s) if (map.count(c)) a++;
    cout << (a ? "YES" : "NO") << "\n";
    return 0;
}
