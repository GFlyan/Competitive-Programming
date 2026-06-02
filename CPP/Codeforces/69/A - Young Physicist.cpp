#include <iostream>

using namespace std;

int main() {
    int t,x {}, y{}, z{};
    cin >> t;
    while (t--) {
        int v1, v2, v3;
        cin >> v1 >> v2 >> v3;
        x += v1;
        y += v2;
        z += v3;
    }
    cout << ((!x && !y && !z) ? "YES\n":"NO\n");
    return 0;
}
