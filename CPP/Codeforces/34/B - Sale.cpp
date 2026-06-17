#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m, a{};
    cin >> n >> m;
    priority_queue<int, vector<int>, greater<>> min_heap;
    while (n--) {
        int v;
        cin >> v;
        min_heap.emplace(v);
    }
    while (m--) {
        auto v = min_heap.top();
        min_heap.pop();
        if (v < 0) a += abs(v);
    }
    cout << a << "\n";
    return 0;
}
