#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            long long int n,c=0;
            cin>>n;
            int f=1;
            while(n!=1)
            {
                if (n%2==0)
                {
                    n/=2;
                    c++;
                }
                else if(n%3==0)
                {
                    n=(2*n)/3;
                    c++;
                }
                else if(n%5==0)
                {
                    n=(4*n)/5;
                    c++;
                }
                else
                {
                    if(n!=1)
                    {   
                        f=0;
                        break;
                    }
                }
            }
            if (f)
                cout<<c<<"\n";
            else
            cout<<"-1\n";
        }
}
