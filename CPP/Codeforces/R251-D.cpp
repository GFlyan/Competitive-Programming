#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int solve(std::vector<int> a, std::vector<int> b) {
    if (b.size() > a.size()) return 0;
    int v = 0;
    for (int p = 0; p < b.size(); p++) {
        if (b[p] > a[p]) v += b[p] - a[p];
    }
    return v;
}

int main() {
    int sa, sb;
    std::vector<int> a, b;

    std::cin >> sa >> sb;
    std::cin.ignore();
    std::string line, token;
    std::getline(std::cin, line);
    std::stringstream ss1(line);

    while (ss1>>token)
        a.emplace_back(std::stoi(token));

    std::getline(std::cin, line);
    std::stringstream ss2(line);

    while (ss2>>token)
        b.emplace_back(std::stoi(token));

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());


    std::cout << solve(a, b) << "\n";
    return 0;
}