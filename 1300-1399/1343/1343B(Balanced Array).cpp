#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=3,k=3;
        cin>>n;
        if((n/2)%2!=0)
            cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            int k=0;
            for(int i=2;k<n/2;i+=2,k++)
                cout<<i<<" ";
            k=0;

            for (int i=1;k<n/2;i+=2,k++)
            {
                if(k==(n/2)-1)
                {
                    i=n/2+i;
                    cout<<i<<" ";
                }
                else
                    cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}
