#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main() {
    int a[N];
    for(int i = 0; i < N; i ++) cin >> a[i];
    int b;
    cin >> b;
    int c = b + 30;
    int count = 0;

    for(int i = 0; i < N; i ++) {
        if(c > a[i] || c == a[i]) {
            count ++;
        }
    }
    cout << count;
    return 0;
}