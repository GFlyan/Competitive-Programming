#include <iostream>

using namespace std;

int main() {
    int n, m, a{}, b;
    cin >> n >> m;
    b = max(n, m);
    for (int i = 0; i <= b; i++) for (int j = 0; j <= b; j++) if (i*i+j == n && i+j*j == m) a++;
    cout << a << "\n";
    return 0;
}
