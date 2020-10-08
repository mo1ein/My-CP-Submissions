#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        string a(n,'0'),b(n,'0');
        for (int i=0;i<n;++i)
        {
            if(s[i]=='1')
            {
                a[i]='1';
                b[i]='0';
                for (int j=i+1;j<n;j++)
                    b[j]=s[j];

                break;
            }
            else if(s[i]=='0')
            {
                a[i]='0';
                b[i]='0';
            }
            else
            {
                a[i]='1';
                b[i]='1';
            }
        }
        cout<<a<<"\n"<<b<<"\n";
    }
}
