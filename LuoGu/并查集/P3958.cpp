#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int N = 10010; 
int p[N];
LL x[N], y[N], z[N]; 

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

LL dist(LL x1, LL y1, LL z1, LL x2, LL y2, LL z2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, h;
        LL r;
        cin >> n >> h >> r;
        int top[N], bot[N];
        int topNum = 0, botNum = 0;

        for (int i = 1; i <= n; i++) {
            cin >> x[i] >> y[i] >> z[i];
            p[i] = i;

            if (z[i] + r >= h) {
                top[++topNum] = i;
            }

            if (z[i] - r <= 0) {
                bot[++botNum] = i;
            }
        }


        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) { 
                if (dist(x[i], y[i], z[i], x[j], y[j], z[j]) <= 4 * r * r) {
                    p[find(i)] = find(j);
                }
            }
        }

        if (topNum == 0 || botNum == 0) {
            puts("No");
            continue;
        }

        bool found = false;
        for (int i = 1; i <= topNum && !found; i++) {
            for (int j = 1; j <= botNum && !found; j++) {
                if (find(top[i]) == find(bot[j])) {
                    found = true;
                }
            }
        }

        cout << (found ? "Yes" : "No") << endl;
    }

    return 0;
}