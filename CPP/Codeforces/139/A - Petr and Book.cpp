#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t=7, a{};
    cin >> n;
    vector<int> v;
    while(t--) {
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    while(true) {
        n -= v[a];
        if (n <= 0) break;
        a = (a+1)%7;
    }
    cout << a+1 << "\n";

    return 0;
}