#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int c=0;
    for(int i=0;i<n;i++)
        if(a[i]+k<=5)
            c++;
    cout<<c/3;
}
