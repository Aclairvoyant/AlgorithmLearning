#include <bits/stdc++.h>
using namespace std;

double k, res;

int main() {
    cin >> k;
    int i = 1;

    while(1) {
        res += (double)1/(double)(i++);
        if (res > k) {
            cout << i - 1;
            break;
        } 
    }
    return 0;
}