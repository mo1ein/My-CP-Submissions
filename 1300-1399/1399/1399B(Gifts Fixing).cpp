#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long int a[n],b[n];

        for (long int i=0;i<n;i++)
            cin>>a[i];

        for (long int i=0;i<n;i++)
            cin>>b[i];

        long int mina=0,minb=0;
        for (long int i=0;i<n;i++){
            if (i!=0 && a[i]<mina)
                mina=a[i];
            else if (i==0)
                mina=a[i];
        }

        for (long int i=0;i<n;i++){
            if (i!=0 && b[i]<minb)
                minb=b[i];
            else if (i==0)
                minb=b[i];
        }

        long long int suma=0,sumb=0;
        for (long int i=0;i<n;i++){
            if (a[i]>mina)
                suma+=a[i]-mina;
        }

        for (long int i=0;i<n;i++){
            if (b[i]>minb)
                sumb+=b[i]-minb;
        }

        long long int c=0;
        for (long int i=0;i<n;i++)
            if (b[i]-minb!=0 && a[i]-mina!=0)
               c+=min(b[i]-minb,a[i]-mina);

        cout << suma+sumb-c<<"\n";
    }
}
