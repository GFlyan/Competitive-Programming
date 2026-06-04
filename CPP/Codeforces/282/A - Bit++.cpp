#include <iostream>

using namespace std;

int main() {
    int n, v{};
    cin >> n;
    while (n--) {
        string s, a;
        cin>>s;
        for (auto c: s) {
            if (c == '-' || c == '+') {
                if (a.empty()) {
                    a += c;
                    continue;
                }
                a += c;
                if (a == "--") v--;
                else v++;
                a = "";
            }
        }
    }
    cout << v << "\n";
    return 0;
}