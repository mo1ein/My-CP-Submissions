#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,can,s=0,c=0;
    cin>>n>>k;
    can = 4*60;
    for (int i=1;i<=n;++i)
    {
        if(s+5*i+k<=can)
        {
            s+=i*5;
            c++;
        }
        else
            break;
    }
    cout<<c;
}
