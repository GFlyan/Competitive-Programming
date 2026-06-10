#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> f = {0, 1};
    for (int i = 2; f[i-2]+f[i-1] < n; i++) f.emplace_back(f[i-2]+f[i-1]);
    for (int i = 0; i <= f.size()-1; i++) {
        for (int j = 0; j <= f.size()-1; j++) {
            for (int k = 0; k <= f.size()-1; k++) {
                if (f[i]+f[j]+f[k] == n) {
                    cout << f[i] << " " << f[j] << " " << f[k] << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "I'm too stupid to solve this problem\n";
    return 0;
}