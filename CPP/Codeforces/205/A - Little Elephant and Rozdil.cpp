#include <iostream>
#define oo 1000000001

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d = oo, c = oo, a;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        if (v < d) {
            d = v;
            a = i;
        } else if (v == d) c = d;
    }
    cout << (d == c ? "Still Rozdil" : to_string(a)) << "\n";
    return 0;
}