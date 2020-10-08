#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],x=0,c=0;

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        c+=abs(a[i]-x);
        x=a[i];
        c+=2;
    }
    cout<<c-1;
}
