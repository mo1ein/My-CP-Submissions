#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=3,k=3;
        cin>>n;
        for (int i=2;i<k;i++)
        {
           if(n%sum==0)
               break;
           else
           {
               sum+=pow(2,i);
               k++;
           }
        }
        cout<<n/sum<<endl;
    }
}
