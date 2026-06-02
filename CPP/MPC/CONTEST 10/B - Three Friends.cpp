#include <algorithm>
#include <iostream>
#include <vector>

using namespace  std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long a, b, c;
        vector<long long> v;
        cin >> a >> b >> c;
        v = {a, b, c};
        sort(v.begin(), v.end());
        if (v[0] == v[1] && v[0] == v[2]) cout << 0 << "\n";
        else if (v[0] != v[1] && v[0] != v[2] && v[1] != v[2]) {
            v[0]++;
            v[2]--;
            cout << abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) << endl;
        } else if (v[0] == v[1]) {
            v[2]--;
            cout << abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) << endl;
        } else if (v[1] == v[2]) {
            v[0]++;
            v[1]--;
            v[2]--;
            cout << abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) << endl;
        }
    }
    return 0;
}