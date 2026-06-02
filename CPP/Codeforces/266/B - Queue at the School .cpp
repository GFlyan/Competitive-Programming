#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--) {
        for (int i = 0; i < n-1; i++) {
            if (s[i] == 'G') continue;
            char peek = s[i+1];
            if (peek == 'G') {
                swap(s[i+1], s[i]);
                i++;
            }
        }
    }
    cout << s << "\n";
    return 0;
}
