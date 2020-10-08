//by mo1ein
#include <bits/stdc++.h>
using namespace std ;
int main () {
	int n , x , a = 1;
	cin >> n;
	for (int i=0; i<n; i++)
    {
		cin >> x;
		if (x%2 == 0)
        {
			cout << x/2 << endl;
		} 
        else 
        {
			cout << (x+a)/2 << endl;
			a = -a;
		}
    }
}
