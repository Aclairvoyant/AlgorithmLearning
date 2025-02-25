#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;

int main() {
    vector<int> v;
    for(int i = 0; i < 10; i ++) v.push_back(i);
    for(int i = 0; i < 10; i ++) cout << v[i] << " ";
    cout << endl;
    v.pop_back();
    for(int i = 0; i < 10; i ++) cout << v[i] << " ";

    vector<int> v1 = {4, 1, 5, 9, 8};
    sort(v1.begin(), v1.end());
    for(const auto &x : v1) {
        cout << x << endl;
    }

    cout << "===================================" << endl;

    vector<int> v2 = {1, 2, 3, 3, 6, 6, 8};
    sort(v2.begin(), v2.end());
    auto last = unique(v2.begin(), v2.end());
    for(const auto &a : v2) {
        cout << a << " ";
    }
    cout << endl;
    v2.erase(last, v2.end());
    for(const auto &b : v2) {
        cout << b << " ";
    }

    v2.insert(v2.begin() + 2, 5);
    cout << endl;
    for(const auto &b : v2) {
        cout << b << " ";
    }

    cout << "你好";

    // pair<int, double> p(1, 2.3);
    // cout << p.first << " " << p.second << endl;

    // vector<pair<int, int>> v;
    // v.push_back(make_pair(3, 2));
    // v.push_back(make_pair(1, 4));
    // v.push_back(make_pair(1, 3));
    // sort(v.begin(), v.end());
    // for(const auto &x : v) 
    //     cout << x.first << " " << x.second << endl;




    return 0;
}