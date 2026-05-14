#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a%b): a;
}

int main() {
    int n, s1{}, s2{}, as1{}, as2{};
    vector<int> vs1, vs2;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            s1 += i;
            as1++;
            vs1.emplace_back(i);
        }
        else {
            s2 += i;
            as2++;
            vs2.emplace_back(i);
        }
    }
    int g = gcd(s1, s2);
    if (g == 1) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
        cout << as1 << " ";
        for (auto v1: vs1)
            cout << v1 << " ";
        cout << "\n";
        cout << as2 << " ";
        for (auto v2: vs2)
            cout << v2 << " ";
        cout << "\n";
    }
    return 0;
}
