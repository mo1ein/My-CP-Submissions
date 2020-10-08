#include <iostream>
using namespace std ;
int main () 
{
	int n = 0 , a = 0 , b = 0 , i = 0 ;
	cin >> n ;
	cout << "I hate " ;
	for (i = 2 ; i <= n ; i++)
	{
		if (i % 2 == 0)
			cout << "that" << " I love " ;
		else
			cout << "that" << " I hate " ;	
	}
	cout << "it" ;
	return 0 ;
}

