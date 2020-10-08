#include  <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,sum=0;
    string s ;
    cin >> n ;
    while (n--)
    {
        cin>>s;
        if (s[0]=='T')
            sum+=4;
        else if (s[0]=='C')
            sum+=6;
        else if (s[0]=='O')
            sum+=8;
        else if (s[0]=='D')
            sum+=12;
        else
            sum+=20;
    }
    cout << sum;
}

