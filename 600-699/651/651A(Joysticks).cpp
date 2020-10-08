#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0,f=1;

    if(a==1&&b==1)
        cout<<0;
    else
    {
        if(a>b)
        {
            while(a>0 && b>0)
            {
                if(a-2<=0 )
                    swap(a,b);
                a-=2;
                b++;
                c++;
            }
        }
        else
        {
            while(a>0 && b>0)
            {
                if(b-2<=0)
                    swap(a,b);
                b-=2;
                a++;
                c++;
            }
        }
        cout<<c;
    }
}
