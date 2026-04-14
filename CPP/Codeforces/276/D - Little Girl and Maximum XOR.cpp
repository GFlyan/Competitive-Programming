#include <iostream>

using namespace std;

long long pow(int n) {
    long long result = 2;
    for(int i = 1; i < n; i++) {
        result *= 2;
    }
    return result;
}


int main() {

    long long l, r;
    cin >> l >> r;
    long long i = ~r, n = 0, p = 0;



    while (pow(n) < r) {
        if ((i >> n) & 1)
            p += pow(n);
        n++;
    }

    cout << (l == r ? 0 : p ^ r)  << "\n";

    return 0;
}