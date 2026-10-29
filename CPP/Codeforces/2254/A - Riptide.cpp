#include <iostream>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        c = pq.top(); pq.pop();
        if (a == b || b == c || a == c) cout << 0 << "\n";
        else cout << (abs(a-b) < abs(a-c) ? (abs(a-b) < abs(b-c) ? abs(a-b) : abs(b-c)) : abs(a-c) < abs(b-c) ? abs(a-c) : abs(b-c)) << "\n";
    }
    return 0;
}