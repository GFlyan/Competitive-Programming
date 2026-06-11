#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (!n) cout << 0;
    else {
        n++;
        cout << (n & 1 ? n : n / 2) << "\n";
    }
    return 0;
}