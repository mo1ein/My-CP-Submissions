#include <iostream>
using namespace std ;
int main ()
{
	int n = 0 , k = 0 , i = 0;
	cin >> n >> k ;
	for (i=0 ; i < k ; i++)
	{
		if(n % 10 == 0)
			n /= 10 ;
		else
			n -= 1 ;
	}
	cout << n ;
	return 0 ;
}

