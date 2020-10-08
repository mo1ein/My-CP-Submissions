#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,sum=0,first=1;
        cin>>a>>b>>n;
        if (a>=b)
            first=1;
        else
            first=0;
        while(a<=n&&b<=n)
        {
            if (first){
                b+=a;
                first=0;
                sum++;
            }
            else if (first==0){
                a+=b;
                first=1;
                sum++;
            }
            else
                break;
            //cout<<"a : "<<a<<" b : "<<b<<endl;
        }
        cout<<sum<<"\n";
    }
}
