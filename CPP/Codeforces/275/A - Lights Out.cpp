#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> m1(5);
    for (int i = 0 ; i < 5 ; i++) {
        vector<int> vec;
        if (i == 0 || i == 4) vec = {-1, -1, -1, -1, -1};
        else vec = {-1, 1, 1, 1, -1};
        m1[i] = vec;
    }
    vector<vector<int>> m2(5);

    for ( int i = 0; i < 5; i++) {
        if (i == 0 || i == 4){ m2[i] = {-1, -1, -1, -1, -1};continue;}
        int a, b, c;
        cin >> a >> b >> c;
        m2[i] = {-1, a, b, c, -1};
    }

    for (int i = 0 ; i < 5; i++) {
        if (i == 0 || i == 4) continue;
        for (int j = 0 ; j < 5; j++) {
            if (j == 0 || j == 4 || !(m2[i][j] & 1)) continue;
            if (m1[i-1][j] != -1) m1[i-1][j] = !m1[i-1][j];
            if (m1[i+1][j] != -1) m1[i+1][j] = !m1[i+1][j];
            if (m1[i][j-1] != -1) m1[i][j-1] = !m1[i][j-1];
            if (m1[i][j+1] != -1) m1[i][j+1] = !m1[i][j+1];
            m1[i][j] = !m1[i][j];
        }
    }

    for (int i = 0 ; i < 5; i++) {
        if (i == 0 || i == 4) continue;
        for (int j = 0 ; j < 5; j++) {
            if (j == 0 || j == 4) continue;
            cout << m1[i][j];
        }
        cout << "\n";
    }
    return 0;
}
