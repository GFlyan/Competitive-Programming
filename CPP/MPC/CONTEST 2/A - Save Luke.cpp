#include <iomanip>
#include <iostream>

using namespace std;

using ld = long double;

int main() {
    int d,l,v1,v2;
    cin >> d >> l >> v1 >> v2;
    long double t = (long double)(l-d)/(v1+v2);
    cout << setprecision(9) << t << "\n";
    return 0;
}