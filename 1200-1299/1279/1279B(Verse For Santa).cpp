#include <bits/stdc++.h>
using namespace std ;
long long int t,s,b,n;
int main ()
{
    cin >> t ;
    while (t--)
    {
        cin >> n >> s;  
        int a[n+1];
        for (int i=1;i<=n;i++)
            cin >>a[i];
        int sum=0;
        int max=0;
        int l=0;
        int k=0;
        for  (int j=1 ;j<=n;j++)
            {
                if (a[j]>max)
                {
                    max=a[j];
                    l=j;
                }
                sum+=a[j];
                if (sum>s)
                {
                    k=1;
                    break ;
                }
            }
        cout <<(k?l:0)<<"\n";
        }
    }
