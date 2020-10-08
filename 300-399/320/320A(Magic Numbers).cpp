#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    for (i=0;i<s.size();i++)
    {
        if( (s[i]!='1' &&  s[i]!='4') || s[0] =='4')
            break;
        else
        {
            if(s[i]=='4')
            {
                if(s[i-1]=='4')
                {
                    if (s[i-2]!='1')
                        break;
                }
            }
        }
    }
    cout << ( i==s.size() ? "YES":"NO" );
}
