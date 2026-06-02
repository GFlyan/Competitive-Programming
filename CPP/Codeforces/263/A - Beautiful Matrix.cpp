#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int c{};
    while (true) {
        int v;
        cin >> v;
        c++;
        if (v) break;
    }
    int row = ceil((double)c/5), column = c%5;
    if (!column) column = 5;
    int ans = abs(3-row) + abs(3-column);
    cout << ans << endl;
    return 0;
}