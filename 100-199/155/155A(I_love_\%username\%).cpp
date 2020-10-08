#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,t,min=0,max=0,c=0;
    cin>>n ;
    n-=1;
    cin>>t;
    max = t;
    min = t;
    while(n--){
        cin>>t;
        if (t>max){
                max = t;
                c++;
        }
        else if (t<min){
                min = t;
                c++;
        }
    }
    cout<<c;
}
