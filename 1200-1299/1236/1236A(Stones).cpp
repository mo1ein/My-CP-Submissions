#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t , a , b , c ;
    cin >> t ;
    while (t--)
    {
        cin >> a >> b >> c ;
        int res = min(b,c/2);
        res+=min(a,(b-res)/2);
        cout << res*3 << "\n";
    }
}
