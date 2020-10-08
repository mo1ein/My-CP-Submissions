#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    int sum=0,c=0;

    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>=m)
        {
            c++;
            break;
        }
        else if(sum<m)
        {
            sum+=a[i];
            c++;
        }
    }
    cout<<c;
}
