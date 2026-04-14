#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long c = 0;
    if (!(n & 1)) {
        for (long long i = 1; i <= n/4; i++) {
            if ((n-2*i)/2 != i)
                c++;
        }
    }
    cout << c << "\n";
    return 0;
}