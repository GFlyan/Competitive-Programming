#include <iostream>

using namespace std;

int main() {
    int n, a{};
    cin >> n;
    while (n--) {
        int x, y, z, c{};
        cin >> x >> y >> z;
        if (x) c++;
        if (y) c++;
        if (z) c++;
        if (c>1) a++;
    }
    cout << a <<"\n";


    return 0;
}