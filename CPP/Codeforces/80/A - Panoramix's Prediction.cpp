#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) if (n%i == 0) return false;
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    if (n == 2 && m == 3) cout << "YES\n";
    else if(!(m&1)) cout << "NO\n";
    else {
        int k{};
        for(k = n+1; k <= 49; k++) if(isPrime(k)) break;
        cout << (k == m ? "YES":"NO") << "\n";
    }
    return 0;
}
