#include <iostream>
using namespace std ;
int main ()
{
char y ;
double a=0,b=0,c=0,d=0,i=0,x=0,n=0,z=0 ;
int j=0 ;
cin >> a >> y >> b  >> c >> y >> d ;

i = d+b ;
i/= 2 ;

x = c+a ;
z = x/2 ;
j = int (x/2) ;
n = (z - j) * 60;
i+=n ;

while (i>=60)
{
	i-=60 ;
	j++ ;
}
if (j<10 && i<10)
	cout <<0 << j << ":" << 0 << i <<endl ;
else if (j<10 && i>=10 )
	cout << 0 << j << ":" << i << endl ;
else if (j>=10 && i<10 )
	cout << j << ":" << 0 << i <<endl ;
else
	cout << j << ":" << i<<endl ;

return 0 ;
}
