#include <iostream>

using namespace std;

int main() {
    int n, a, b, r = 1;
    cin >> n >> a >> b;
    a++;
    b--;
    while (a < n && b >= 0) {
        r++;
        b--;
        a++;
    }
    cout << r << "\n";
    return 0;
}
