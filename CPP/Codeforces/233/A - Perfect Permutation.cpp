#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n&1) cout << -1;
    else for(int i = n; i >=1; i--) cout << i << " ";
    cout<< "\n";
    return 0;
}