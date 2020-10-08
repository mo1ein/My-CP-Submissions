#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
    int n , count=0;
    string s,b;
    cin >> n ;
    for (int i=0;i<n;i++)
    {
        cin >> s ;
        if (b!=s)
            count++;
        b=s;
    }
    cout << count ;
}
