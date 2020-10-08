#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,d=0;
    cin >> n;
    if((n%2==0)&&((n&(n-1))==0))
        cout<<1;
    else if ((n%2==0) && ((n&(n-1))!=0))
    {
       while(n!=1)
       {
           if (n%2==0)
               n/=2;
           else
           {
               n--;
               d++;
           }
       }
       cout<<d+1;
    }
    else if ((n%2!=0) && ((n-1>0) && (((n-1)&(n-2))==0)))
        cout<<2;
    else 
    {
        if (n!=1)
        {
            n--;
            while (n!=1)
            {
                if(n%2==0)
                    n/=2;
                else
                {
                    n--;
                    d++;
                }
            }
            cout<<d+2;
        }
        else 
            cout<<1;
    }
}
