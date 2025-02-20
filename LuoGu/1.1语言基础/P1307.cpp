#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL n, m;

int main() {
    cin >> n;

    while(n != 0) {
        m = m * 10 + n % 10;
        n /= 10;
    }

    cout << m;
    return 0;
}