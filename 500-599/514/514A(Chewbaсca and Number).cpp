#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d=1,sum=0;
    cin>>n;
    while(n>0)
    {
        int c;
        c=n%10;
        n/=10;
        if(9-c<c && 9-c!=0 && n==0 )
            sum+=(9-c)*d;
        else if(9-c<c && n!=0)
            sum+=(9-c)*d;
        else
            sum+=c*d;
        d*=10;
    }
    cout<<sum;
}
