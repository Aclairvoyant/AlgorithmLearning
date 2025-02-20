#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    char b[3];
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
        cout<<a[b[i]-'A']<<" ";
    }
    return 0;
}
