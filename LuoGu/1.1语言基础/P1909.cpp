#include <bits/stdc++.h>
using namespace std;

const int N = 10010;
int n;
int res = 0x3f3f3f3f;

int main() {
    cin >> n;

    for(int i = 1; i <= 3; i ++) {
        int num, money, cnt;
        cin >> num >> money;

        if(n % num == 0) {
            cnt = n / num;
            res = min(res, cnt * money);
        }else {
            cnt = n / num + 1;
            res = min(res, cnt * money);
        }
    }

    cout << res;

    return 0;
}