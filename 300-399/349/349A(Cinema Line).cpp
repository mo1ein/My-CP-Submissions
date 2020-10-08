#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0,h=0,f=0;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if (a==100)
        {
            if(f>=1 && t>=1)
            {
                t--;
                f--;
                h++;
            }
            else if (t>=3)
            {
                t-=3;
                h++;
            }
            else
                t=-1;
        }
        else if (a==50)
        {
            if(t>=1)
            {
                t--;
                f++;
            }
            else
                t=-1;
        }
        else if (t>=0)
            t++;
   }
    cout<< ( t>=0 ?  "YES": "NO");
}
