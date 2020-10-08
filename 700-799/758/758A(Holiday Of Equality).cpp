#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,max=0,c=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;++i)
    {
            cin>>a[i];
            if(a[i]>max)
                max=a[i];
    }
    for (int i=0;i<n;++i)
        c+=max-a[i];

    cout<<c;
}
