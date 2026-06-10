#include <iostream>
#define oo 1001

using namespace std;

int main() {
    int n, f, l, d = oo, p1, p2;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i == 1) {
            f = a;
            l = a;
        } else if (i == n && d > abs(f-a)) {
            p1 = i;
            p2 = 1;
        } else {
            if (d > abs(l-a)) {
                d = abs(l-a);
                p1 = i-1;
                p2 = i;
            }
            l = a;
        }
    }
    cout << p1 << " " << p2;
    return 0;
}