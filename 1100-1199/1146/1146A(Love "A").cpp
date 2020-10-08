#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int a=0,x=0;
    cin>>s;
    for (int i=0;i<s.size();i++)
        {
            if (s[i]=='a')
                a++;
        }
    if(a>s.size()/2)
       cout<<s.size();
    else
    {
        for (int i=0;i<s.size();i++)
        {
            if(s[i]!='a')
                x++;
            if(a>(s.size()-x)/2)
            {
                cout<<s.size()-x;
                break;
            }
        }
    }
}
