#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n][2],bx=-10e9,by=-10e9,my=10e9,mx=10e9;

    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
    {
            my=min(a[i][1],my);
            by=max(a[i][1],by);
            mx=min(a[i][0],mx);
            bx=max(a[i][0],bx);
    }

    if((by-my)>(bx-mx))
        cout<< (by-my)*(by-my);
    else if((by-my)<(bx-mx))
        cout<<(bx-mx)*(bx-mx);
    else
        cout<< (by-my)*(bx-mx);
}
