#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n],sum=0;
        for (int i=0;i<n;i++)
            cin>>arr[i];

        int n = sizeof(arr)/sizeof(arr[0]);
        sort (arr,arr+n);
        for (int i=0;i<n;i++)
        {
            if (i<n-1 && arr[i+1]-arr[i]<=1)
                sum+=1;
        }
        cout << (n-sum==1 ? "YES\n" :"NO\n" );
    }
}
