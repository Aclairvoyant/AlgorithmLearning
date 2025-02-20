#include <bits/stdc++.h>
using namespace std;

const int N = 10010;
int p[N];
int n, m, w;
int v[N], f[N];
int r[N];

int find(int x) {
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m >> w;
    for(int i = 1; i <= n; i ++) { 
        p[i] = i;
        cin >> r[i] >> v[i];
    }

    for(int i = 1; i <= m; i ++) {
        int a, b;
        cin >> a >> b;
        p[find(a)] = find(b);
    }

    for (int i = 1; i <= n; i++) {
        if (p[i] != i) {
            int root = find(i);
            r[root] += r[i];
            v[root] += v[i];
            r[i] = v[i] = 0;
        }
    }

    for(int i = 1; i <= n; i ++) {
        if(p[i] == i) {
            for(int j = w; j >= r[i]; j --) {
                f[j] = max(f[j], f[j - r[i]] + v[i]);
            }
        }
    }

    cout << f[w];

    return 0;
}