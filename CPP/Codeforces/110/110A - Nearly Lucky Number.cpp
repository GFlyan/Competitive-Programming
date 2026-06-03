#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    string s = to_string(n);
    int v{};
    for(auto c: s) {
        string t{};
        t+=c;
        if(stoi(t)==4||stoi(t)==7)v++;
    }
    cout << (v == 4 || v ==7 ? "YES\n" : "NO\n");
    return 0;
}