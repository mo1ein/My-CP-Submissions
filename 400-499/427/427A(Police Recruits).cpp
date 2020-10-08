//by mo1ein
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
int n = 0 , s = 0 , c = 0; 
cin >> n ;
int a[n] ;

for (int i = 0 ; i < n ;  i++)
{
    cin >> a[i] ;
    if (a[i] == -1)
    {
        if (c > 0)
            c-=1;
        else
            s+=1;
    }
    else
        c+=a[i] ;
}
cout << s ;
    return 0 ;
}
