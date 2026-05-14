#include <iostream>
 
using namespace std;
 
int main() {
    int x, y, xMinor, yMajor;
    cin >> x >> y;
    xMinor = abs(x) + abs(y);
    yMajor = xMinor;
    if (x < 0) xMinor *= (-1);
    if (y < 0) yMajor *= (-1);
    if(xMinor < 0) cout << xMinor << " " << 0 << " " << 0 << " " << yMajor << "\n";
    else cout << 0 << " " << yMajor << " " << xMinor << " "<< 0 << "\n";
    return 0;
}