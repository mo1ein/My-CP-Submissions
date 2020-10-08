#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,a,b,c=0,d=0;
    cin >> n ;
    while(n--)
    {
        cin>>a>>b;
        if (a>b) c++; else if(a<b) d++;
    }
    if (c>d)    
        cout << "Mishka";
    else if (c==d)
        cout << "Friendship is magic!^^";
    else
        cout << "Chris";
}
