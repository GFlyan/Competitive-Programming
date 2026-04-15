#include <iostream>

using namespace std;

int main() {
    // int x1, x2, y1, y2, x, y, k1, k2, op1, op2;
    // cin >> x1 >> y1 >> x2 >> y2;
    // cin >> x >> y;
    // k1 = (x2 - x1)/x;
    // k2 = (y2 - y1)/y;
    // op1 = x1+x*k1;
    // op2 = y1+y*k2;
    // cout << (x2 == op1 && y2 == op2 ? (k1+k2 & 1 ? "NO\n" : "YES\n") : "NO\n");
    // return 0;
    int x1, x2, y1, y2, x, y, qx, qy, rx, ry;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x >> y;
    qx = (x2 - x1)/x;
    qy = (y2 - y1)/y;
    rx = (x2 - x1)%x;
    ry = (y2 - y1)%y;
    //A questão de mudança para esse código em relação ao comentado acima é que caso exista restos de divisão para x2 ou y2 eless nunca serão iguais op1 ou op2
    cout << (qx+qy & 1 || rx || ry ?  "NO\n" : "YES\n");
    return 0;
}