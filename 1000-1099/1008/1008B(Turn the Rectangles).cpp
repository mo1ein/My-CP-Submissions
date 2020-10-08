#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n;
    cin>>n;
    int w,h,m=0;
    for (int i=0;i<n;i++)
    {
        cin>>w>>h;
        if (i==0)
            m=max(w,h);
        else if (m>=max(w,h))
            m=max(w,h);
        else if (m>=min(w,h))
            m=min(w,h);
        else 
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
