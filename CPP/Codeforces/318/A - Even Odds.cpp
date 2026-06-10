#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long n, k, ao, bo = 1, be = 2;
    cin >> n >> k;
    ao = ceil((double)n/2);
    if (k<=ao) {
        for (long long i = 1; i < k; i++) bo += 2;
        cout << bo;
    } else {
        for (long long i = 1; i < k-ao; i++) be += 2;
        cout << be;
    }
    cout << "\n";
    return 0;
}