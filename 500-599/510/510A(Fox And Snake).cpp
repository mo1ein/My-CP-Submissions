//by mo1ein
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
int m = 0 , n = 0 ;
cin >> n >> m ; 
for (int i = 0 ; i < n ; i++ , cout << "\n")
    for (int j = 0 ; j < m ; j++)
    {
        if(i%2 == 0 )
            cout << "#";
        else if (i%4==1 && j==m-1)
            cout << "#" ;
        else if (i%4==3 && j==0)
            cout << "#" ;
        else 
            cout << "." ;
    }
return 0 ;
}
