#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n & 1?"contest\n":"home\n");
    return 0;
}
