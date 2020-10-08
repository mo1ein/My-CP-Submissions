#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char n;
    string s1="qwertyuiop",
           s2="asdfghjkl;",
           s3="zxcvbnm,./",s;
    cin>>n>>s;
    for(int i=0;i<=s.size();i++)
    {
        if (s1.find(s[i]) != string::npos)
        {
            if (n=='R')
                cout<<s1[s1.find(s[i])-1];
            else
                cout<<s1[s1.find(s[i])+1];
        }
        else if (s2.find(s[i]) != string::npos)
        {
            if (n=='R')
                cout<<s2[s2.find(s[i])-1];
            else
                cout<<s2[s2.find(s[i])+1];
        }
        else if (s3.find(s[i]) != string::npos)
        {
            if (n=='R')
                cout<<s3[s3.find(s[i])-1];
            else
                cout<<s3[s3.find(s[i])+1];
        }
    }
}
