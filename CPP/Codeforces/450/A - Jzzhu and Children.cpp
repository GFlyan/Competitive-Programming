#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, m, k{}, l{};
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        int v, a;
        cin >> v;
        a = ceil((double)v/m);
        if (a >= k) {
            k = a;
            l = i;
        }
    }
    cout << l << "\n";
    return 0;
}