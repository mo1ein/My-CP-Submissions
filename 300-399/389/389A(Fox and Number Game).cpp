#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0,temp=0;

    while(1)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>a[i-1] && i>0)
                a[i]-=a[i-1];
            sum+=a[i];
        }
        sort(a,a+n);
        if(sum!=temp)
            temp=sum;
        else
            break;
        sum=0;
    }
    cout<<temp;
}
