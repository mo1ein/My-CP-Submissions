#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n;
    cin>>n;
    int a[n],bi=0,big=0,si=0;

    for (int i=0;i<n;i++)
        cin>>a[i];

    int small=a[0];
    for (int i=0;i<n;i++)
    {
       if (a[i]>big ) 
       {
           big=a[i];
           bi=i;
       }
       else if (a[i]<=small)
       {
           small=a[i];
           si=i;
       }
    }
    if (si>bi)
        cout<<bi+(n-1)-si;
    else
        cout<<bi+(n-1)-si-1;
}
