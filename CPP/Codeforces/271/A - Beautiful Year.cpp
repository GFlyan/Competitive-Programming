#include <iostream>

using namespace std;

int main() {
    string s;
    int n;
    cin >> n;
    n++;
    s = to_string(n);
    while (s[0] == s[1] || s[0] == s[2] || s[0] == s[3] || s[1] == s[2] || s[1] == s[3] || s[2] == s[3] ) {
        n++;
        s = to_string(n);
    }
    cout << s << "\n";
}
