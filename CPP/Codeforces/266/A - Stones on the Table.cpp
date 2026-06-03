#include <iostream>

using namespace std;

int main() {
    int n, a{};
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) a++;
    }
    cout << a << "\n";
    return 0;
}
