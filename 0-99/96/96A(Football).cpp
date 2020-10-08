#include <iostream>
using namespace std ;
int main ()
{
	int b = 0 , c = 0 ;
	string input ;
	cin >> input ;
	for (int i = 0 ; i < input.size() ; i++)
	{
		if (int(input[i]) == 48)
			{
				if (b < 7)
					b = 0 ;				
				c++ ;
			}	
		else
		{
			if (c < 7)		
				c = 0 ;
			b++ ;
		}
	}

	if (c >= 7 || b >= 7)
		cout << "YES" ;
	else
		cout << "NO" ;

	return 0;
}
