#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,a,b,c,x=0,y=0,z=0;
    cin >> n ;
    while (n--){cin >>a>>b>>c;x+=a; y+=b;z+=c;}
    (x|y|z)?cout << "NO" : cout << "YES" ;
}
