#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<(n%2==0 ? n/2 : n/2+1);
        cout<<"\n";
    }
}
