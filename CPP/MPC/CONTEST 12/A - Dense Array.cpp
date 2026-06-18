#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, a{};
        cin >> n;
        vector<int> v;
        while (n--) {
            int i;
            cin >> i;
            v.emplace_back(i);
        }
        for (int i = 0; i < v.size()-1; i++) {
            if (max(v[i], v[i+1]) <= 2*min(v[i], v[i+1])) continue;
            if (min(v[i], v[i+1]) == v[i]) {
                int k = ceil((double)v[i+1]/2);
                vector<int> v2;
                int j{};
                for (j = 0; j <= i; j++) v2.emplace_back(v[j]);
                v2.emplace_back(k);
                for (; j < v.size(); j++) v2.emplace_back(v[j]);
                v = v2;
                a++;
                i--;
            } else {
                int k = ceil((double)v[i]/2);
                vector<int> v2;
                int j{};
                for (; j <= i; j++) v2.emplace_back(v[j]);
                v2.emplace_back(k);
                for (; j < v.size(); j++) v2.emplace_back(v[j]);
                v = v2;
                a++;
            }
        }
        cout << a << "\n";
    }
    return 0;
}