#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    while (t--)
    {
        int m,n,b=0,w=0;
        cin>>m>>n;
        char a[m][n];
        for (int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(i!=m-1)
                        if(i%2==0&&j%2==0)
                            a[i][j]='B';
                        else if(i%2!=0&&j%2!=0)
                            a[i][j]='B';
                        else
                            a[i][j]='W';
                    else
                    {
                        if((n*m)%2==0)
                        {
                            if (b<(n/2)+1)
                            {
                                a[i][j]='B';
                                b++;    
                            }
                            else
                                a[i][j]='W';
                                w++;
                        }
                        else
                        {
                            if(w<(n-1)/2)
                            {
                                a[i][j]='W';
                                w++;
                            }
                            else
                            {
                                a[i][j]='B';
                                b++;    
                            }
                        }
                    }
                }
        }
        for (int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j];
            cout<<"\n";
        }
    }
}
