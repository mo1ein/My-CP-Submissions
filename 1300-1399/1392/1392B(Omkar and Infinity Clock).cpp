#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k;
        cin>>n>>k;
        int a[n],c=0;

        for (int i=0;i<n;++i)
            cin>>a[i];

        if (k%2==0) c=2; else c=1;

        for (int i=0;i<c;++i)
        {
            int d=*max_element(a, a + n);
            for (int i=0;i<n;++i)
                a[i]=d-a[i];
        }

        for (int i=0;i<n;++i)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}
