#include <iostream>

using namespace std;

int main() {
    int n, t, a{}, e{};
    cin >> n;
    t = n;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (t == n-1) {
            a = max(x,y);
            e = a;
            continue;
        }
        e -= x;
        e += y;
        if (e > a) a = e;
    }
    cout << a << "\n";
    return 0;
}