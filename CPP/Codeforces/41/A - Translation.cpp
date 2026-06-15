#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int p1{}, p2 = t.size()-1;
    bool flag = true;
    if (s.size() != t.size()) flag = false;
    else {
        while (p1 < s.size() && p2 >= 0 && flag) {
            if (s[p1] != t[p2]) flag  = false;
            p1++;
            p2--;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
    return 0;
}