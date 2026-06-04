#include <complex>
#include <iostream>

using namespace std;

int main() {
    int n, d{}, s{}, a{};
    cin >> n;
    d = n+1;
    while (n--) {
        int i;
        cin >> i;
        s+=i;
    }
    for (int i = 1; i <= 5; i++) if ((s+i)%d != 1) a++;
    cout << a << "\n";
    return 0;
}