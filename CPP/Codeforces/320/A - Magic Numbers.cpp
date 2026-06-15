#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a{}, b{};
    bool flag = true;
    for(int i = 0; i < s.size() && flag; i++) {
        char c = s[i];
        if(c == '1' & !a & !b) a++;
        else if(c == '4' & !a & !b) flag = false;
        else if(c == '1') {
            a = 1;
            b = 0;
        } else if (c == '4' && b < 2) b++;
        else flag = false;
    }

    cout << (flag ? "YES\n" : "NO\n");
    return 0;
}