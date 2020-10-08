#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int m=abs(a-b);
        if(m%10>0)
            cout<<m/10+1<<"\n";
        else
            cout<<m/10<<"\n";
    }
}
