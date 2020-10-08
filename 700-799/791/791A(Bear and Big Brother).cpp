#include <iostream>
using namespace std ;
int main () 
{
	int  a = 0 , b = 0 , j = 0 , k = 0 ;
	cin >> a >> b ;
	while (a <= b)
	{
		a *= 3 ;
		b *= 2;
		j++;
	}
	cout << j ;
	return 0 ;
}

