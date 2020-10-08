#include <bits/stdc++.h>
using namespace std ;
int main ()
{
int  d1 = 0,d2 = 0,d3 = 0 ; cin >> d1 >> d2 >> d3 ;
if (d1*2 + d2 *2 <= d1+d3+d2 ) 
    cout << d1*2 + d2 *2 ;
else if (d2*2 + d3*2 <= d1+d2+d3)
    cout <<d2*2 + d3*2 ; 
else if (d1*2 + d3*2 <= d1+d2+d3)
    cout << d1*2 + d3*2 ;
else
    cout << d1+d2+d3 ;
return 0 ;
} 
