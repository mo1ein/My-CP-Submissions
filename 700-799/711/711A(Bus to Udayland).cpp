#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,b=0;
    cin>>n;
    string s[n][1];
    for (int i=0;i<n;i++)
        for(int j=0;j<1;j++)
        {
            cin>>s[i][j];
            if(s[i][j][0]=='O'&&s[i][j][1]=='O'&&b==0)
            {
                s[i][j][0]='+';
                s[i][j][1]='+';
                b=1;
            }
            else if(s[i][j][3]=='O'&&s[i][j][4]=='O'&&b==0)
            {
                s[i][j][3]='+';
                s[i][j][4]='+';
                b=1;
            }
        }
    if (b)
    {
        cout<<"Yes\n";
        for (int i=0;i<n;i++)
            for(int j=0;j<1;j++)
            cout<<s[i][j]<<"\n";
    }
    else
        cout<<"NO\n";

}
