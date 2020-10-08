#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,c=0;
    cin>>n;
    while(n--)
    {
        int i=0;
        cin>>a>>b;
        if (a%b!=0)
        {
            c=a/b;
            cout<< (c+1)*b - a <<"\n";
        }
        else 
            cout<<0<<"\n";
    }
}
