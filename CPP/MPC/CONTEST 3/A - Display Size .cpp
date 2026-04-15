#include <iostream>

using namespace std;

int main() {
    int n, f = 0;
    cin >> n;
    for (int i = 1; i*i <= n; i++)
        if (n%i == 0)
            f = i;

    cout << f << " " << n/f << "\n";

}