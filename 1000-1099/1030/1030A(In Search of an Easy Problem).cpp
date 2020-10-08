#include <iostream>
using namespace std ;
int main ()
{
	int n = 0 , i = 0 , k = 0 , x = 0 ;
	cin >> n ;
	for (i = 0 ; i < n ; i++)
	{
		cin >> k ;
		if (k == 1)
			x++ ;
	}
	if (x>=1)
		cout << "HARD" ;
	else
		cout << "EASY" ;
	return 0 ;
}

