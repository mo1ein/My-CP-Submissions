#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int a , b , c , m = 0 ;
    cin >> a >> b >> c ;
    if (a + b * c > m)
        m = a + b * c ;
    if (a * b * c > m)
        m = a * b * c ; 
    if (a * b + c > m)
        m = a * b + c ;
    if (a + b + c > m)
        m = a + b + c ;
    if ((a + b) * c > m)
        m = ((a + b) * c) ;
    if (a * (b + c) > m)
        m =  a * (b + c);
cout << m ;
return 0 ;
}
