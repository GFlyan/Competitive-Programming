#include <iostream>

using namespace std;

int main() {
    string s1, s2, a;
    cin >> s1 >> s2;
    int size = s1.length();
    for (int i = 0; i < size; i++) {
        if (s1[i] == s2[i]) a += '0';
        else a += '1';
    }
    cout << a << "\n";
    return 0;
}

