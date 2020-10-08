#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,c;
    cin>>n>>c;
    int a[n],big=0;

    for (int i=0;i<n;i++)
        cin>>a[i];

    for (int i=0;i<n;i++)
        if(a[i]-a[i+1]>big)
            big = a[i]-a[i+1];

    cout<< (big-c > 0 ? big-c : 0 );
}
