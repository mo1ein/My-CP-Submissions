#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector <long long int>t;
    long long int a,b,p=0;
    for(long long int j=0;j<n;j++)
    {
        cin>>a;
        p+=a;
    }
    for (long long int i=0;i<n;i++)
    {
        cin>>b;
        t.push_back(b);
    }

    sort(t.begin(), t.end()); 
    p-=(t[n-1]+t[n-2]);
    
    if (p>0)
        cout<<"NO";
    else
        cout<<"YES";
}
