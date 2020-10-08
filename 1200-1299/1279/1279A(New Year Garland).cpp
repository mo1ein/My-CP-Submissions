#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long int n ,mid,r,g,b,up,low;
    cin >> n ;
    while (n--)
    {
        cin>>r>>g>>b;
        up=max(max(r,g),b);
        low=min(min(r,g),b);
        mid=r+g+b-up-low;
        if (mid+low>=up || up-(mid+low)==1)
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
}
