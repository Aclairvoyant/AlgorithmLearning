#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10];
    for(int i = 0; i < 9; i ++) {
        cin >> a[i];
    }
    int num;
    for(int i = 0; i < 9; i ++) {
        for(int j = 1; j < 10; j ++) {
            num += a[i] * j;
        }
    }
    cout << num;
    return 0;
}