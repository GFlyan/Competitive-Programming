#include <iostream>

using namespace std;

int main() {
    string s, f{}, a{};
    cin >> s;
    for (auto c: s) {
        if (c == '.' && !f.size()) {
            a += '0';
            continue;
        }
        if (c == '.' && f.size()){
            a += '1';
            f = "";
            continue;
        }
        if (c == '-' && f.size()) {
            a += '2';
            f = "";
            continue;
        }
        f += c;
    }
    cout << a << "\n";
    return 0;
}