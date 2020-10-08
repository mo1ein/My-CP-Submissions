#include <iostream>
using namespace std ;
int main ()
{
int n = 0 , A = 0 , D = 0 ;
string s ;
cin >> n >> s ;
for (int i = 0 ; i < n ; i++)
{
	if( int(s[i]) == 65)
		A++ ;
	else 
		D++ ;
}
if (A > D)
	cout << "Anton" ;
else if (A < D)
	cout << "Danik" ;
else
	cout << "Friendship" ;

return 0 ;
}
