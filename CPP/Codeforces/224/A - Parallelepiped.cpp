#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) if (n % i == 0) return false;
    return true;
}

int main() {
    int a, b, c;
    long long s{};
    vector<int> v;
    cin >> a >> b >> c;
    v.emplace_back(a);
    v.emplace_back(b);
    v.emplace_back(c);
    sort(v.begin(), v.end());
    vector<vector<pair<int, int>>> r(2);
    for (int i = 0; i < 2; i++) {
        if (v[i] == 1 || isPrime(v[i])) r[i].emplace_back(1, v[i]);
        else for(int j = 1; j * j <= v[i]; j++) if (v[i] % j == 0) r[i].emplace_back(j, v[i] / j);
    }
    bool flag{};
    for (int i = 0; i < r[0].size() && !flag; i++) {
        for (int j = 0; j < r[1].size() && !flag; j++) {
            auto p1 = r[0][i];
            auto p2 = r[1][j];
            if (p1.first == p2.first) {
                s = 4*p1.first;
                flag = true;
                if (p1.second * p2.second == v[2])s += 4*p1.second + 4*p2.second;
                else {
                    s = 0;
                    flag = false;
                }
            }
        }
    }
    cout << s << "\n";
    return 0;
}