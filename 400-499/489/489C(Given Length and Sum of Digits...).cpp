#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int m,s,l=0;
    cin>>m>>s;
    if (s==0 && m>1)
        cout << "-1 -1" ;
    else if (m>=1 && s>9*m)
        cout << "-1 -1";
    else
    {
        for (int i=m-1,l=s ; i>=0 ; i--)
        {
            int j=max(0,l-9*i);
            if (i==m-1&&j==0&&l) j=1;
            cout << j ;
            l-=j;
        }
        cout << " ";
       for (int i=m-1,l=s;i>=0;i--)
       {
           int j=min(9,l);
            cout << j;
            l-=j;
       }
            









    }
}
