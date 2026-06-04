#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (auto &c : s1) c = tolower(c);
    for (auto &c : s2) c = tolower(c);
    cout << (s1 > s2 ? 1 : s1 == s2 ? 0 : -1);
    return 0;
}

