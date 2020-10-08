#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int a ,b, c,n ;
    cin >>n;
    while (n--)
        {
            cin>>a>>b ;
            if (b-a>0 && (b-a)%2!=0)
                cout <<1<<"\n" ;
            else if (b-a>0 && (b-a)%2==0)
                cout <<2<<"\n" ;
            else if (b-a<0 && abs(b-a)%2==0)
                cout << 1 <<"\n";
            else if (b-a<0 && abs(b-a)%2!=0)
                cout <<2<<"\n";
            else
                cout <<0<<"\n" ;
    }

}
