#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr1[n],arr2[n],sum=0;

        for (int i=0;i<n;i++)
            cin>>arr1[i];

        for (int i=0;i<n;i++)
            cin>>arr2[i];

        sort(arr1,arr1+n);
        sort(arr2,arr2+n);

        for (int i=n-1;i>=0;i--)
        {
            if(k>0 && arr2[i]>arr1[n-i-1])
            {
                swap(arr1[n-i-1],arr2[i]);
                k--;
            }
            if(k==0)
                break;
        }
        for (int i=0;i<n;i++)
            sum+=arr1[i];

        cout<<sum<<"\n";
    }
}
