#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
int p[N];
int n, m;
int res, cnt;


struct Edge {
    int x, y, t;

    bool operator < (const Edge &T) const {
        return t < T.t;
    }

}edge[N * 2];

int find(int x) {
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void kruskal() {
    for(int i = 1; i <= m; i ++) {
        int x = edge[i].x, y = edge[i].y, t = edge[i].t;
        x = find(x), y = find(y);

        if(x != y) {
            p[x] = y;
            cnt ++;
            res = max(res, t);
        }
    }
    if(cnt != n - 1) cout << -1;
    else cout << res;
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) p[i] = i;

    for(int i = 1; i <= m; i ++) {
        int x, y, t;
        cin >> x >> y >> t;
        edge[i] = {x, y, t};
    }
    sort(edge + 1, edge + m + 1);

    kruskal();

    return 0;
}