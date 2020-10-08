#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,n=0,d=0;
    string s="";
    bool z=false;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int d=2;
        if(n>=2)
        {
            cout<<2;
            for (int i=1 ;i<n-1;i++)
            {
                cout<<9;
            }
            cout<<3<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
}
