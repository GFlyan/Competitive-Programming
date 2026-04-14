#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    vector<int> v;
    while(ss >> token)
        v.emplace_back(stoi(token));

    sort(v.begin(),v.end());

    int i = 0, j = v.size()-1;


    vector<long long> squares;

    while(i < n/2 && j >= n/2) {
        long long minimize = (v[i]+v[j])*(v[i]+v[j]);
        squares.emplace_back(minimize);
        i++;
        j--;

    }

    long long sum{};

    for(auto square: squares)
        sum += square;

    cout << sum << "\n";

    return 0;
}