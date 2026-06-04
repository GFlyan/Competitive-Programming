#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np, total_ml, total_slices, a{};
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    total_ml = k*l;
    total_slices = c*d;
    for (;total_ml >= nl && total_slices > 0 && p >= np; total_ml-=nl, total_slices--, p-=np, a++) {}
    cout << a/n << "\n";
    return 0;
}