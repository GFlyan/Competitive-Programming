#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, t, s{};
    cin >> n;
    t = n;
    while(t--){
        int v;
        cin >> v;
        s+=v;
    }
    cout << fixed << setprecision(12) << ((double)s/n) << "\n";
    return 0;
}