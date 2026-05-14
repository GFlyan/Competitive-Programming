#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, t, b;
        cin >> n >> s >> t;
        if(s == t && s == n)
            cout << 1 << "\n";
        else {
            b = s+t-n;
            cout << max(s-b, t-b)+1 << "\n";
        }
    }
    return 0;
}