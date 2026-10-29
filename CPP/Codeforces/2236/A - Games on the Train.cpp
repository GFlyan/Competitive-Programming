#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        while (n--) {
            int s;
            cin >> s;
            v.emplace_back(s);
        }
        sort(v.begin(), v.end());
        int a = v[v.size()-1] - v[0] + 1;
        cout << a << "\n";
    }
    return 0;
}