#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string a,b ; cin>>a>>b;
    for (int i=0;i<a.length();i++) cout<<(a[i]!=b[i]?1:0);
}
