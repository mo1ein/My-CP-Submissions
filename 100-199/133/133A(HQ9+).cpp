#include <bits/stdc++.h>
using namespace std ;
int main ()
{
bool a=true ;
string p ;
cin >> p ;
for (int i = 0 ; i < p.size() ; i++ )    
    if (p[i] == 'H' || p[i] =='Q' || p[i] == '9' )
        {
            a=false;
            cout << "YES";
            break ;
        }
if (a)
    cout << "NO" ;
    return 0 ;
}
