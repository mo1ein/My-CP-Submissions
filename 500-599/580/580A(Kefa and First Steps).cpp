#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,a,c=0,back=0,max=0;
    cin >> n ;
    while (n--)
    {
        cin >> a ;
        if (a>=back)
            c++;
        else 
        {
            if (c>max)
                max=c;
            c=1;
        }
        back=a;
    }
    cout << (max>=c ? max : c);
}
