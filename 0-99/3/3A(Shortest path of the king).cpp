#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,t,res="";
    int count=0;
    cin>>s>>t;
    while(s!=t){
        if ( s[0]<t[0] && s[1]>t[1] )
        {
            s[0]=char(int(s[0])+1);
            s[1]=char(int(s[1])-1);
            res+="RD\n";
            count++;
        }
        else if ( s[0]>t[0] && s[1]>t[1] )
        {
            s[0]=char(int(s[0])-1);
            s[1]=char(int(s[1])-1);
            res+="LD\n";
            count++;
        }
        else if ( s[0]>t[0] && s[1]<t[1] )
        {
            s[0]=char(int(s[0])-1);
            s[1]=char(int(s[1])+1);
            res+="LU\n";
            count++;
        }
        else if ( s[0]<t[0] && s[1]<t[1] )
        {
            s[0]=char(int(s[0])+1);
            s[1]=char(int(s[1])+1);
            res+="RU\n";
            count++;
        }
        else if (s[0]==t[0])
        {
            if(s[1]<t[1])
            {
                s[1]=char(int(s[1])+1);
                res+="U\n";
                count++;
            }
            else if(s[1]>t[1])
            {
                s[1]=char(int(s[1])-1);
                res+="D\n";
                count++;
            }
        }
        else if (s[1]==t[1])
        {
            if(s[0]<t[0])
            {
                s[0]=char(int(s[0])+1);
                res+="R\n";
                count++;
            }
            else if(s[0]>t[0])
            {
                s[0]=char(int(s[0])-1);
                res+="L\n";
                count++;
            }
        }
    }
    cout<<count<<"\n"<<res;
}
