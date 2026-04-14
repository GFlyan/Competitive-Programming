#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int n, m;
    cin >> n;
    cin >> m;
    n = pow(2, n);
    cout << (m % n);
    return 0;
}