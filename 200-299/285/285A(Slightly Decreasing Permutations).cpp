#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,num=0;
    cin>>a>>b;
    int sum=a;

    for (int i=1;i<=a;i++)
    {
        if (b!=0)
        {
            cout<<sum<<" ";
            sum--;
            b--;
        }
        else
        {
            num++;
            cout<<num<<" ";
        }
    }
}
