#include <iostream>

using namespace std;

int main() {
    long long number;
    cin >> number;
    if (number & 1)
        cout << -1*(number/2+1);
    else
        cout << number/2;

    cout << "\n";

    return 0;
}