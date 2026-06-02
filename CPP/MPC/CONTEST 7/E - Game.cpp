#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    long long n;
    std::cin >> n;
    std::cout << (n & 1 ? "1" : "2") << "\n";
    return 0;
}