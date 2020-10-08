#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n ,t;
    cin>>n>>t;
    if (n==1&&t==10) cout<<-1;
    else {cout<<t%10+t/10;
    for(int i=1;i<n;i++) cout<<0;
    }
}
