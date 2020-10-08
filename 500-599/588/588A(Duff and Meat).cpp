#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,sum=0,res=0,low=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        if (i==0)
        {
            low = b;
            sum+=a;
        }
        else if (low<=b)
            sum+=a;
        else if (low>b)
        {
            res+=sum*low;
            low = b;
            sum=a;
        }
        if (i==n-1)
            res+=sum*low;
    }
    cout<<res;
}
