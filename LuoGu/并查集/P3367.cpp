#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;
int n, m;
int p[N];

int find(int x) {
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) p[i] = i;

    while (m --)
    {
        int q;
        int a, b;
        cin >> q >> a >> b;
        if(q == 1) {
            p[find(a)] = find(b);
        }else {
            if(find(a) == find(b)) puts("Y");
            else puts("N");
        }
    }

    return 0;

}