#include  <iostream>

using namespace std;

int main() {
    int n, k, l = 0;
    cin >> n >> k;
    if (!k || n == k) {
        cout << 0 << " " << 0 << "\n";
        return 0;
    }
    l = n - k;
    if (l < k)
        cout << 1 << " " << l << "\n";
    if (l > k)
        cout << 1 << " " << k+1 << "\n";
    if (l == k)
        cout << 1 << " " << k << "\n";

    return 0;
}