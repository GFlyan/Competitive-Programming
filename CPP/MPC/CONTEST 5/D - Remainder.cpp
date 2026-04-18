#include <bits/stdc++.h>

using namespace std;

int main() {
    int size, x, y;
    cin >> size >> x >> y;
    string s, sformated{};
    cin >> s;
    for( int p = size-x; p < size; p++)
        sformated += s[p];
    int e{}, c{};
    for (int p = sformated.size()-1; p >= 0; p--) {
        int r = stoi(string(1, sformated[p]));
        if (( r == 0 && e == y )||( r == 1 && e != y)) {
            c++;
        }
        e++;
    }

    cout << c << "\n";
    return 0;
}