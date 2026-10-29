#include <iostream>
#include <queue>

using namespace std;

int main() {
    string s;
    cin >> s;
    queue<char> q;
    q.emplace('h');
    q.emplace('e');
    q.emplace('l');
    q.emplace('l');
    q.emplace('o');
    for (auto c : s) if (c == q.front()) q.pop();
    cout << (q.empty() ? "YES" : "NO") << "\n";
    return 0;
}