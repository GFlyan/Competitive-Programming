#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int bigger {}, s {}, r {};
    bool sequence {true};
    for (int p {}; p < n; p++) {
        if (v[p] > bigger) {
            bigger = v[p];
            sequence = true;
            s = 1;
            r = 1;
        } else if (v[p] == bigger && sequence) {
            sequence = true;
            r++;
        } else if (v[p] == bigger && !sequence) {
            sequence = true;
            r = 1;
        }
        else {
            sequence = false;
            r = 0;
        }
        if (r > s)
            s = r;
    }
    cout << s << "\n";
    return 0;
}