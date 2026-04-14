#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string word;
    cin >> word;
    unordered_map<char, bool> map;
    for (auto letter: word)
        if (!map.count(letter)) map.emplace(letter, true);

    cout << (map.size() & 1 ? "IGNORE HIM!":"CHAT WITH HER!") << "\n" ;
    return 0;
}