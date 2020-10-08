#include <iostream>
using namespace std ;
int main ()
{
int res = 1 , ans  = 1 ;
string s  , shape = "AEIOUY";
cin >> s ;
for (int i = 0 ; i < s.size() ; i++)
{
    if (shape.find(s[i]) == -1 )
        ans++ ;
    else if (ans > res )
    {
        res = ans ;
        ans = 1 ;
    }

    else
        ans = 1 ;
}

if (ans > res )
    cout << ans ;
else 
    cout << res ;

    return 0 ;

}

