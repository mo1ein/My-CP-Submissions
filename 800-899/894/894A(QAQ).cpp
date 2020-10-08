#include <bits/stdc++.h>
using namespace std ;
int a=0;
int main()
{
    string a,b="QAQ";
    cin>>a;
    int m=a.length();
    int n=b.length();
    int x[m+1][n+1]={{0}};
    
    for(int i=0;i<=n;i++)
        x[0][i]=0;

    for (int i=0;i<=m;i++)
        x[i][0]=1;

    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            if (a[i-1]==b[j-1])
                x[i][j]=x[i-1][j-1]+x[i-1][j];
            else
                x[i][j]=x[i-1][j];
        }
    cout<<x[m][n];
    }

