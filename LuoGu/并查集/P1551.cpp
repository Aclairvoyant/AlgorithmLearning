#include <bits/stdc++.h>
using namespace std;

const int N = 10010;
int n, m, q;
int p[N];

int find(int x) {
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main () {
    cin >> n >> m >> q;
    for(int i = 1; i <= n; i ++) p[i] = i;

    while(m --) {
        int a, b;
        cin >> a >> b;

        p[find(a)] = find(b);
    }

    while(q --) {
        int a, b;
        cin >> a >> b;

        if(find(a) == find(b)) puts("Yes");
        else puts("No");
    }

    return 0;
}