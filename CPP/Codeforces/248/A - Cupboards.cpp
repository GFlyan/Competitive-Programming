#include <iostream>

using namespace std;

int main() {
    int n, t, l{}, r{};
    cin >> n;
    t = n;
    while (t--) {
        int a, b;
        cin >> a >> b;
        l += a;
        r += b;
    }
    if (l > n/2) l = n-l;
    if (r > n/2) r = n-r;
    cout << l + r << "\n";
    return 0;
}