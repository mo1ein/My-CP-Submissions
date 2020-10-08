//mo1ein
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,b=0,i=1;
    cin >> n ;
    while (1)
    {
        b+=i*(i+1)/2;
        if (b==n)
        {
            cout << i;
            break;
        }
        else if (b>n)
        {
            cout << i-1;
            break;
        }
        i++;
    }
}
