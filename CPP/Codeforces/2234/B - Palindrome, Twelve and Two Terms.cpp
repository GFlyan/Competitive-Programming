#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a{}, b{}, c{};
        bool flag;
        cin >> n;
        c = n/12;
        while (12*c >= 0) {
            flag = true;
            b = 12*c;
            a = n-b;
            string s = to_string(a);
            int j = s.length()-1;
            for (int i = 0; s.length() > 1 && i < s.length()/2 && i < j; i++, j--) {
                if (s[i] != s[j]) {
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                c--;
                continue;
            }
            break;
        }
        if (flag) cout << a << " " << b << "\n";
        else cout << -1 << "\n";

    }
    return 0;
}