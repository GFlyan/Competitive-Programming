#include <iostream>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while(t--){

        int a, b, n, amt{};

        cin >> a >> b >> n;

        while(a + b <= n) {
            if ( a < b) {
                a += b;
            } else {
                b += a;
            }
            amt++;
        }

        amt++;

        cout << amt << "\n";
    }

    return 0;
}