#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int hh, mm;
    double H, D, C, N;
    cin >> hh >> mm;
    cin >> H >> D >> C >> N;
    double m = 20*60 - (hh*60 + mm);
    double h = H + m * D;
    double d = C*80/100;

    if(hh < 20) {
        double a = min(ceil(H/N)*C, ceil(h/N)*d);
        cout << fixed << setprecision(18) << a << "\n";
    }
    else {
        cout << fixed << setprecision(18) << (ceil(h/N)*d) << "\n";
    }
    return 0;
}