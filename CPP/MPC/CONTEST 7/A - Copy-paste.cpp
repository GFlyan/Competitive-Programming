#include <iostream>
#include <vector>
#define oo 10001

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, m = oo,mpos{}, r{};
        cin >> n >> k;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.emplace_back(a);
            if(a<m){
                m = a;
                mpos=i;
            }
        }
        for(int i =0; i <n; i++){
            if(i == mpos) continue;
            r += (k-v[i])/v[mpos];
        }
        cout << r << "\n";
    }
    return 0;
}