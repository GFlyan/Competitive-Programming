#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int c{}, last = 2;
    bool flag = false;
    for (auto i: s) {
        string a;
        a += i;
        int v = stoi(a);
        if (v == last) c++;
        else {
            last = v;
            c = 1;
        }
        if (c >= 7) {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES\n": "NO\n");
    return 0;
}