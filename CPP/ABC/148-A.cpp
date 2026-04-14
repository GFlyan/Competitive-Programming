#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int a, b;
    unordered_map<int, int> map = {{1,1}, {2,2}, {3,3}};
    cin >> a >> b;
    map.erase(a);
    map.erase(b);
    for (auto [f, s]: map)
        cout << s << "\n";
    return 0;
}