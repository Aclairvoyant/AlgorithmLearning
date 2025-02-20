#include <bits/stdc++.h>
using namespace std;

int res = 0;
int m = 0;

int main() {
    for(int i = 1; i <= 7; i ++) {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        if(sum > 8 && sum > m) {
            m = sum;
            res = i;
        }
    }
    cout << res;

    return 0;
}