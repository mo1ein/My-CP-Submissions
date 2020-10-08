#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,m,i=0,point=1;
    cin>>n>>m;
    while (point>0)
    {
        point=n*m-(n+m-1);
        n--;
        m--;
        i++;
    }
    cout<<(i%2==0?"Malvika":"Akshat");
}
