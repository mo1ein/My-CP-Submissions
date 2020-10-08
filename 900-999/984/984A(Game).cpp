#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int t[n];
    for (int i=0;i<n;i++)
        cin>>t[i];

    sort(t,t+sizeof(t)/sizeof(t[0]));
    cout<<(n%2==0 ? t[(n-1)/2] : t[n/2]);
}
