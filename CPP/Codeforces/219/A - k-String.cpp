#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;
    unordered_map<char, int> map;
    for (auto c: s) {
        if (!map.count(c)) map.emplace(c, 1);
        else map[c]++;
    }
    cout << endl;
    bool flag{};
    string a = "", b;
    for (auto m: map) {
        if ((m.second%k & 1 || m.second < k) && k != 1) flag = true;
        for (int c = 0; c < m.second/k && !flag; c++) a += m.first;
        if (flag) break;
    }
    b = a;
    for (int i = 1; i <k; i++) b += a;
    cout << (flag ? "-1" : b) << "\n";
    return 0;
}