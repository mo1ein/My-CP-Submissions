#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long int a,b,n=1,c=0 ;
    cin >> a >> b ;
    while (a<b&&c<10)
    {
        a++ ; c++;
        n*=a%10;
    }
    cout << n%10 ;
}
