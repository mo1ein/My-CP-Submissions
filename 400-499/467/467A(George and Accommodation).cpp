#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,p,q,sum=0;
    cin >> n ;
    while (n--)
    {
        cin >> p >> q ;
        if (q>=2 && p<=q-2)
            sum++;
    }
    cout << sum << "\n";
}
