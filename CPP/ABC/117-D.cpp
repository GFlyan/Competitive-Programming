#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int n;
    long long k, j{}, l=0;
    cin >> n >> k;
    vector<long long> v;
    string line, token;
    cin.ignore();
    getline(cin, line);
    stringstream ss(line);

    while (ss >> token) {
        v.emplace_back(stoll(token));
    }

    while (k >=0) {
        for (auto value: v) {
            l += k^value;
        }
        if (l>j) j = l;
        l=0;
        k--;
    }

    cout << j << "\n";
    return 0;
}
