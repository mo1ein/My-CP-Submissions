#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n],d=0;
    int j=sizeof(a)/sizeof(a[0]);
    
    for (int i=0 ;i<n;i++)
        cin>>a[i];

    sort(a,a+j);
    for (int i=0 ;i<n;i++)
        if(!(a[i]>s))
        {
            s-=a[i];
            d++;
        }
    cout<<(d>=(n-1) ? "YES" : "NO");
}
