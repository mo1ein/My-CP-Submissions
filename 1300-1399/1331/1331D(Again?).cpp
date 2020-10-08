#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A,n="";
    int t;
    cin>>A;
    for (int i=1;i<=6;++i)
        n+=A[i];

    t=stoi(n);
    n=to_string(t);
    n=n[n.size()-1];
    t=stoi(n);

    int c,d;
    while(true)
    { 
        d=t%2;
        c/=2;
        if(c==0)
        {
            cout<<d;
            break;
        }
    }
}
