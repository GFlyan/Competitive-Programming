#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m = 2;
    cin >> n;
    vector<int> v = {1};
    while (n > 1) {
        while (n / m) {
            n = n /m;
            v.emplace_back(m);
        }
        m++;
    }


}