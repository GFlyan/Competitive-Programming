#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string any, format1, format2;
    unordered_map<string, bool> map;
    while (n--) {
        cin >> any;
        format1 = any[0] + any[1] + any[2] + any[5] + any[6] + any[7];
        format2 = any[5] + any[6] + any[7] + any[0] + any[1] + any[2];
        if (map.count(format2)) {

        }

    }
     return 0;
}
