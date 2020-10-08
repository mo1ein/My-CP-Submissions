#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,a,h,sum=0;
    cin >> n >> h;
    while(n--)
    {
        cin >> a;
        (a<=h) ? sum++ : sum+=2;
    }
    cout << sum ;
}
