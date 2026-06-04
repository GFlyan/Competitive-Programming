#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, t;
    long long v{}, p{};
    cin >> n;
    t = n;
    vector<int> a(t+1, 0);
    for (int i = 1; i <= t; i++) {
        int j;
        cin >> j;
        a[j] = i;
    }
    cin >> t;
    while (t--) {
        int i;
        cin >> i;
        v += a[i];
        p += n-a[i]+1;
    }

    cout << v << " " << p << "\n";

    return 0;
}