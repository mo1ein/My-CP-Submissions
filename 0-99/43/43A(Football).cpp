#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,w=0,l=0;
    cin>>n;
    string s , ln="",wn;
    while (n--)
    {
        cin>>s;
        if (ln!=""&&s!=ln)
        {
            wn=s;
            w++;
        }
        else
        {
            ln=s;
            l++;
        }
    }
    cout << (w>l ? wn : ln );
}
