#include <iostream>

using namespace std;

int main() {
    long long b;
    cin >> b;
    long long amt = 0;
    for (long long i = 1; i <= b; i++) {
        if (b%i == 0) amt++;
    }
    cout << amt <<"\n";
}