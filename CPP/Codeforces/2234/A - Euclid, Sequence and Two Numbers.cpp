#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        while (n--) {
            int i;
            cin >> i;
            v.emplace_back(i);
        }
        sort(v.begin(), v.end(), greater<int>());

        if (v.size() == 2) cout << v[0] << " " << v[1] << "\n";
        else {
            bool flag = true;
            for (int i = 2; i < v.size(); i++) {
                int x = v[i-2] % v[i-1];
                if (x != v[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) cout << v[0] << " " << v[1] << "\n";
            else cout << -1 << "\n";
        }
    }
    return 0;
}