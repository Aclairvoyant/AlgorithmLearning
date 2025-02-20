#include <bits/stdc++.h>
using namespace std;

int n, cnt, x;
int m, res;

int main() {
    cin >> n >> x;

    for(int i = 1; i <= n; i ++) {
        m = i;
        while(m != 0) {
            res = m % 10;
            m /= 10;
            if(res == x) cnt ++;
        }
    }

    cout << cnt;
    return 0;
}