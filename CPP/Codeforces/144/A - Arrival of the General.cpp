#include <iostream>
#define oo 101

using namespace std;

int main(){
    int n, bigger{}, smaller = oo, bp{}, sp{};
    cin >> n;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if(v<=smaller){
            smaller = v;
            sp=i;
        }
        if(v>bigger) {
            bigger = v;
            bp=i;
        }
    }
    if(bigger == smaller) cout << 0;
    else if(bp>sp) cout << bp+n-1-sp-1;
    else cout << bp+n-1-sp;
    cout << "\n";
    return 0;
}