#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string s, a;
    cin >> s;
    unordered_map<char, bool> map;
    map.emplace('a', 1);
    map.emplace('e', 1);
    map.emplace('i', 1);
    map.emplace('o', 1);
    map.emplace('u', 1);
    map.emplace('y', 1);
    for (auto c: s) {
        c = tolower(c);
        if (!map.count(c)) a += c;
    }
    s = a;
    a = "";
    for (auto c: s) {
        a += '.';
        a += c;
    }
    cout << a << "\n";
    return 0;
}