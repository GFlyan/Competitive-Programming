#include <iostream>
#define oo 10001

using namespace std;

int main() {
    int n, t, bigger = 0, smaller = oo, a{};
    cin >> n;
    t = n;
    while (t--) {
        int v;
        cin >> v;
        if (t == n - 1) {
            bigger = v;
            smaller = v;
            continue;
        }
        if (v > bigger) {
            bigger = v;
            a++;
        }
        else if (v < smaller) {
            smaller = v;
            a++;
        }
    }
    cout << a << "\n";
    return 0;
}