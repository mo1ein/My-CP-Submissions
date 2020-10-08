#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n;
    cin>>n;
    string s;
    for (int i=0;i<n;i++)
    {
        string ns;
        cin>>s;
        for (int i=0;i<s.size();i++)
        {
           if(i==0||i%2!=0) 
               ns+=s[i];
        }
        cout<<ns<<"\n";
    }
}

