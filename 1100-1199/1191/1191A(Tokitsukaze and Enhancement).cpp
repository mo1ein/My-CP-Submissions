#include <iostream>
using namespace std ;
int main ()
{
int n = 0 , a = 0 , b = 0 ;
cin >> n ; 
if (n%4 == 1)
    cout << 0 <<" " <<"A" ;
else if (n%4 == 3)
    cout << 2 << " " << "A" ;
else if (n%4 == 2)
    cout << 1 <<" "<<"B" ;
else if (n%4 == 0)
    cout << 1 << " " << "A" ;

    return 0 ;
}
