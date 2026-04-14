#include <bits/stdc++.h>

using namespace std;

int main() {
    int s;
    cin >> s;
    cin.ignore();
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    vector<int> v;
    while (ss >> token)
        v.emplace_back(stoi(token));

    sort(v.begin(), v.end(), greater<int>());

    for (auto i : v) {
        auto j = sqrt(i);
        int k = j;
        if (j-k) {
            cout << i << "\n";
            break;
        }
    }
}