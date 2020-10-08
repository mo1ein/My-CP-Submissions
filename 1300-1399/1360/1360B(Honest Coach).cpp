#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int low=10000;
        for (int i=n-1;i>=0;i--)
        {
            if(i>0 && (a[i]-a[i-1]<low) )
                low=a[i]-a[i-1];
        }
        cout<<low<<"\n";
    }
}
