#include <iostream>

using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        int a =  1;
        cin >> n >> x;
        int sa = 3;
        for (int i = 2; n >= sa; i++) {
            a = i;
            sa += x;
        }
        cout << a << "\n";
    }
}
