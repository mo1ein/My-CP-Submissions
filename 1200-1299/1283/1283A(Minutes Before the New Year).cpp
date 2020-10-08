#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int h,m,n;
    cin>>n;
    while(n--)
    {
        cin >>h>>m;
        cout<<(24*60)-(h*60+m) << "\n";
    }
}
