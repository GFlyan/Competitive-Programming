#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char f = s[0];
    f = toupper(f);
    s[0] = f;
    cout << s << "\n";
    return 0;
}