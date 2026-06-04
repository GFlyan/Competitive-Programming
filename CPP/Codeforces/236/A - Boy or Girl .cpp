#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
     string s;
     cin >> s;
     unordered_map<char, bool> mp;
     for (auto c : s) mp.emplace(c,true);
     cout << (mp.size()&1? "IGNORE HIM!" : "CHAT WITH HER!") << "\n";
     return 0;
}