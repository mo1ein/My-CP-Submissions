#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0,u=0;

    for(int i=0;i<s.size();i++)
        {
            if(s[i]<='z' && s[i]>='a')
            {
                if(i==0)
                    f++;
            }
            else
                u++;
        }

    if(u==s.size())
        for(int i=0;i<s.size();i++)
            s[i]+=32;

    else if(u==s.size()-1 && f==1)
    {
        for(int i=0;i<s.size();i++)
        {
            if(i==0)
                s[i]-=32;
            else
                s[i]+=32;
        }
    }
    cout<<s;
}
