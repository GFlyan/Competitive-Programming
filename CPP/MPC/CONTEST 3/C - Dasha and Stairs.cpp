#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (!a && !b) cout << "NO\n";
    else cout << (a == b || b == a+1 || b == a-1 ?"YES\n":"NO\n");
    return 0;
}