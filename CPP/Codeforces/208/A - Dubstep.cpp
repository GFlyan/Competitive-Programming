#include <iostream>

using namespace std;

int main() {
    string s, r="", b;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            r += " ";
            i+=2;
        } else r += s[i];
    }
    if(r[0] == ' ') {
        b = r;
        r = "";
        int p{};
        while (isspace(b[p])) p++;
        for (int i = p; i < b.size();i++) r+= b[i];
    }
    if(r[r.size()-1] == ' ') {
        b = r;
        r = "";
        int p = b.size()-1;
        while (isspace(b[p])) p--;
        for (int i = 0; i <= p;i++) r+= b[i];
    }

    cout << r << endl;
    return 0;
}