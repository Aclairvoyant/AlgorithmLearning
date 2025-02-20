#include <bits/stdc++.h>
using namespace std;

const int N = 20010;
int f[N];
int n, m, p, q;
int cnt1 = 0, cnt2 = 0;

int find(int x) {
    if(f[x] != x) f[x] = find(f[x]);
    return f[x];
}

int main() {
    cin >> n >> m >> p >> q;
    for(int i = 1; i <= n + m; i ++) f[i] = i;

    while(p --) {
        int a, b;
        cin >> a >> b;
        f[find(a)] = find(b);
    }

    while(q --) {
        int a, b;
        cin >> a >> b;
        a *= -1, b *= -1;
        f[find(a + n)] = find(b + n);
    }

    for(int i = 1; i <= n; i ++) {
        if(find(i) == find(1)) {
            cnt1 ++;
        }
    }
    for(int i = n + 1; i <= n + m; i ++) {
        if(find(i) == find(n + 1)) {
            cnt2 ++;
        }
    }

    cout << min(cnt1, cnt2);

    return 0;
}