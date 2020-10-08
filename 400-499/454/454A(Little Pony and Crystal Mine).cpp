#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i!=0 && i%2!=0)
            for(int j=i;j<n;j+=2)
                cout<<"*";

        if(i%2!=0)
            for(int j=0;j<i;j++)
                cout<<"D";

        if(i!=0 && i%2!=0)
            for(int j=i;j<n;j+=2)
                cout<<"*";

        if(i%2!=0)
            cout<<"\n";
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i!=0 && i%2!=0)
            for(int j=i;j<n;j+=2)
                cout<<"*";

        if(i%2!=0)
            for(int j=0;j<i;j++)
                cout<<"D";

        if(i!=0 && i%2!=0)
            for(int j=i;j<n;j+=2)
                cout<<"*";

        if(i%2!=0)
            cout<<"\n";
    }
}
