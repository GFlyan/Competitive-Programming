#include <iostream>
#include <vector>

int binarySearch(int t, std::vector<int> v, int fP, int lP) {
    if (fP >= lP) return v[fP];
    int mP = (fP+lP)/2;
    if (t == v[mP]) return v[mP];
    if (t < v[mP]) return binarySearch(t, v, fP, mP);
    if (t > v[mP]) return binarySearch(t, v, mP+1, lP);
}

int main() {
    int input;
    std::cin >> input;
    std::vector<int> v {111, 222, 333, 444, 555, 666, 777, 888, 999};
//    std::cout << binarySearch(input, v, 0, v.size()-1) << "\n";
    std::vector<int>::iterator it = lower_bound(v.begin(), v.end(), input);
    std::cout << *it << "\n";
    return 0;
}
