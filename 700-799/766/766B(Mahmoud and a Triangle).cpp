#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n],r=0;

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (i<=n-3 && j<=n-2 && a[i]+a[j]>a[j+1] && a[i]<a[j]+a[j+1] && a[j]<a[i]+a[j+1])
            {
                r=1;
                break;
            }
        }
        if (r)
            break;
    }
    cout<< (r ? "YES\n": "NO\n");
}
