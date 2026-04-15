#include <iostream>

using namespace std;

bool isPrime(long long n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n%2 == 0) return false;
    for (unsigned long long i = 3; i*i <= n; i+=2) {
        if (n%i == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    long long a, b;
    while (t--) {
        cin >> a >> b;
        cout << (a-b != 1 ? "NO" : isPrime(a+b) ? "YES" : "NO") << "\n";
    }
    return 0;
}
