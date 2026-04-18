#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if(b%n==0) {
        cout << a << "\n";
        return 0;

    }
    if((a+b)%n == 0) cout << n << "\n";
    else {
        int sum = a+b;
        while (sum < 0)
            sum += n;
        cout << sum%n << "\n";
    }
    return 0;
}