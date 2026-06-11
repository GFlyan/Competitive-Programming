#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    unordered_map<int,int> map;
    for (int i = 1; i <= 3; i++) map.emplace(i, i);
    map.erase(a);
    map.erase(b);
    for (auto [i, c]: map) cout << c << "\n";
    return 0;
}