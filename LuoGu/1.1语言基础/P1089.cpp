#include <bits/stdc++.h>
using namespace std;

const int N = 13;
int a[N];
int res;

int main() {
    for(int i = 1; i <= 12; i ++) cin >> a[i];

    int hand = 0, saved = 0;
    for(int i = 1; i <= 12; i ++) {
        hand += 300;
        hand -= a[i];

        if(hand < 0) {
            cout << "-" << i;
            return 0;
        }

        int save = (hand / 100) * 100;
        saved += save;
        hand -= save;
    }

    res = saved * 1.2 + hand;
    cout << res;
    
    return 0;
}