#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    vector<int> v;

    while (ss >> token)
        v.emplace_back(stoi(token));

    sort(v.begin(), v.end());

    while (v[0] != v[v.size() - 1]) {
        int minor = v[0];
        for (int i = v.size() - 1; i > 0; i--) {
            while (v[i] > minor)
                v[i] = v[i] - minor;
        }
        sort(v.begin(), v.end());
    }

    int sum {};
    for (int i : v)
        sum += i;

    cout << sum << "\n";

}