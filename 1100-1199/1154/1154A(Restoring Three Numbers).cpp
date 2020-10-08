#include <bits/stdc++.h>
using namespace std ;
int main(){
    int a,b,c,d,up=0;
    cin>>a>>b>>c>>d;
    up=max(max(max(a,b),c),d);
    if (up-a!=0) cout<< up-a<<" ";
    if (up-b!=0) cout<< up-b<<" ";
    if (up-c!=0) cout<< up-c<<" ";
    if (up-d!=0) cout<< up-d<<" ";
}
