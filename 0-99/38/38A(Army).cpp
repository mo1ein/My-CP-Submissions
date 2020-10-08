#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,s,b,c=0;
    cin>>n;
    int a[n];

    for (int i=0;i<n-1;i++)
        cin>>a[i];
    cin>>s>>b;
    for(int i=s-1;i<b-1;i++)
        c+=a[i];
    cout<<c;  
}
