#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m, bm, i;
    cin >> n >> m;
    bm = m;
    vector<int> v, d;
    priority_queue<long long, vector<long long>, greater<>> min_pq;
    while (bm--) {
        cin >> i;
        v.emplace_back(i);
    }
    sort(v.begin(), v.end());
    for (int p = 0; p < m-1; p++) d.emplace_back(abs(v[p] - v[p + 1]));
    for (int p = 0; p < m-(n-1); p++) {
        long long s = 0;
        for (int k = p; k < p+n-1; k++) s += d[k];
        min_pq.emplace(s);
    }
    cout << min_pq.top() << "\n";
    return 0;
}