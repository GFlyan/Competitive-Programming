#include <iostream>

using namespace std;

int main() {
    long long n, amt{};
    cin >> n;
    while (n) {
        if (!(n&1)) {
            amt += n / 2;
            n = 0;
        } else {
            bool flag = false;
            for (long long i = 3; i*i <= n; i += 2) {
                if (n % i == 0) {
                    amt++;
                    n -= i;
                    flag = true;
                    break;
                }
            }
            if (flag) continue;
            amt++;
            n = 0;
        }
    }
    cout << amt << "\n";
}