#include <bits/stdc++.h>
#include <math.h> 
using namespace std ;
int main ()
{
    int t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        cout<<(k<=sqrt(n) ? (n%2==0 ? (k%2==0? "YES\n": "NO\n") : (k%2!=0 ? "YES\n" : "NO\n")) : "NO\n");
    }
}
