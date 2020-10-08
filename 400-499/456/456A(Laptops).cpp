#include <iostream>
using namespace std ;
main ()
{
int n = 0 , c = 0 ;
cin >> n ;
int a[n],b[n] ;
for (int i = 0 ; i < n ; i++)
{
    cin >> a[i] >> b[i] ;
    if (a[i] < b[i])
	c++ ;
}
if (c == 0)
	cout << "Poor Alex" ;
else
	cout << "Happy Alex" ;	
return 0 ;
}
