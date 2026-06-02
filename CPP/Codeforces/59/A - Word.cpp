#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int upper{}, lower{};
    for (auto c: s) {
        if (isupper(c)) upper++;
        else lower++;
    }

    for (auto &c: s) {
        if (upper == lower || lower > upper) {
            c = tolower(c);
        } else {
            c = toupper(c);
        }
    }
    cout << s << "\n";
    return 0;
}