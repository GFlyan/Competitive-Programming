#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s, a{};
    cin >> s;
    vector<int> v(4,0);
    for (auto i : s) {
        string c;
        c += i;
        if (c == "+") continue;
        int n = stoi(c);
        v[n]++;
    }
    while (v[1]--) {
        if (!a.empty()) a += "+";
        a += "1";
    }
    while (v[2]--) {
        if (!a.empty()) a += "+";
        a += "2";
    }
    while (v[3]--) {
        if (!a.empty()) a += "+";
        a += "3";
    }
    cout << a << "\n";
    return 0;
}