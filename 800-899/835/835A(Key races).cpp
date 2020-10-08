#include <iostream>
using namespace std ;
int main (){
	int a=0 , v1=0 ,v2=0 ,t1=0 ,t2=0 ,p1=0 , p2=0 ;
		cin >> a ;
		cin >> v1 >> v2 >> t1 >> t2 ;
		p1 = a * v1 +  2*t1  ;
		p2 = a * v2 +  2*t2  ;
		if (p1 > p2)
			cout << "Second" ;
		if (p1 < p2)
			cout << "First" ;
		if (p1 == p2)
			cout << "Friendship" ;
return 0;
}
