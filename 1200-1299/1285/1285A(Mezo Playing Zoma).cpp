#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int n,x=0,y=0;
    cin>>n>>s;
    for (int i=0;i<n;i++)
        (s[i]=='L') ? x-- : y++;
    cout<<y-x+1;
}
