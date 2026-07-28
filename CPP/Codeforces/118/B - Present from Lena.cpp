#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int amtSpUp = n, amtSpDown = 1, b = n;
    for (int i = 0; i < n*2+1; i++) {
        if (i <= n) {
            for (int j{}; j < amtSpUp; j++) cout << "  ";
            int v{};
            for (; v <= i; v++) {
                cout << v;
                if (v < i) cout << " ";
            }
            for (v -= 2; v >= 0; v--) cout << " " << v;
            cout << "\n";
            amtSpUp--;
        } else {
            for (int j{}; j < amtSpDown; j++) cout << "  ";
            int v{};
            for (; v < b; v++) {
                cout << v;
                if (v < b-1) cout << " ";
            }
            for (v -= 2; v >= 0; v--) cout << " " << v;
            cout << "\n";
            b--;
            amtSpDown++;
        }
    }
    return 0;
}