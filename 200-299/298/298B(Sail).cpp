#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,sx,sy,ex,ey;
    string s;
    cin>>t>>sx>>sy>>ex>>ey>>s;
    int x=ex-sx,y=ey-sy,W=0,S=0,E=0,N=0,in=0;

    if(x<0)
        W=abs(x);
    else
        E=x;

    if(y<0)
        S=abs(y);
    else
        N=y;

    for(int i=0;i<s.size();i++)
    {
        if(S!=0&&s[i]=='S')
            S--;
        else if(E!=0&&s[i]=='E')
            E--;
        else if(N!=0&&s[i]=='N')
            N--;
        else if(W!=0&&s[i]=='W')
            W--;
        if(W==0 && S==0 && E==0 && N==0)
        {
            in=1;
            cout<<i+1;
            break;
        }
    }
    if(!in)
        cout<<-1;
}
