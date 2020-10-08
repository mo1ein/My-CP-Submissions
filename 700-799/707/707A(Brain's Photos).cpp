#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    bool c=false;
    char a;
    cin>>n>>m;
    int d = n*m;
    while (d--){
            cin>>a;
            if (a =='C'|| a=='Y'|| a=='M'){
                    c=true;
                    cout<<"#Color";
                    break;
            }
        }
        
    if (c==false)
        cout<<"#Black&White";
}
