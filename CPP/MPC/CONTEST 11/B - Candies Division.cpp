#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n%k > k/2) n -= n%k - k/2;
        cout << n << "\n";
    }
    return 0;
}