#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, a, sum{};
        cin >> n >> m;
        while(n--) {
            cin >> a;
            sum += a;
        }
        cout << (sum == m? "YES\n":"NO\n");
    }
    return 0;
}