#include <iostream>
#include <queue>

using namespace std;

int main() {
    int k, l=12, a{};
    cin >> k;
    priority_queue<int> max_heap;
    while (l--) {
        int b;
        cin >> b;
        max_heap.emplace(b);
    }
    while (k > 0 && !max_heap.empty()) {
        auto v = max_heap.top();
        max_heap.pop();
        k -= v;
        a++;
    }
    cout << (k > 0 ? -1 : a) << "\n";
    return 0;
}
