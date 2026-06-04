#include <iostream>
#include <map>

using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    map<char, int> m;
    if (s1.length() + s2.length() != s3.length()) cout << "NO\n" << endl;
    else {
        for (auto c: s3) {
            if (m.count(c)) m[c]++;
            else m.emplace(c, 1);
        }
        for (auto c : s1) {
            if (!m.count(c)) break;
            m[c]--;
            if (!m[c]) m.erase(c);
        }
        for (auto c : s2) {
            if (!m.count(c)) break;
            m[c]--;
            if (!m[c]) m.erase(c);
        }
        cout << (m.empty() ? "YES" : "NO") << "\n";
    }
    return 0;
}