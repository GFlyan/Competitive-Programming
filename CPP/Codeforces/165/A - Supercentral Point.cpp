#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t, r{};
    cin >> n;
    t = n;
    // vector<vector                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        \                                                                                                     <int>> g(2001);
    vector<pair<int, int>> x_axis;
    vector<pair<int, int>> y_axis;
    while (t--) {
        int x, y;
        cin >> x >> y;
        x_axis.emplace_back(x, y);
        y_axis.emplace_back(y, x);
    }
    sort(x_axis.begin(), x_axis.end());
    sort(y_axis.begin(), y_axis.end());
    for (auto p : x_axis) {
        bool a{}, b{}, c{}, d{};
        for (int i = 0; i < n; i++) {
            auto px = x_axis[i];
            if (px.first > p.first) break;
            if (!a && px.first == p.first && px.second > p.second) a = true;
            else if (!b && px.first == p.first && px.second < p.second) b = true;
        }
        for (int i = 0; i < n; i++) {
            auto py = y_axis[i];
            if (py.first > p.second) break;
            if (!c && py.first == p.second && py.second > p.first) c = true;
            else if (!d && py.first == p.second && py.second < p.first) d = true;
        }
        if (a && b && c && d) r++;
    }
    cout << r << "\n";
}
