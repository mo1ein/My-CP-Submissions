#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,c = 0;
    cin >> n ;
    if (n>5)
    {
        c=n/5;
        if(n%5<=5 && n%5!=0)
            c++;
        cout << c ;
    }
    else cout << 1;
} 
