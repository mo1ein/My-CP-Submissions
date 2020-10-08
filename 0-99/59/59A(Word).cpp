//by mo1ein
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string s ;
    cin >> s ;
    int c = 0 ; 
    for (int i = 0 ; i < s.size() ; i++)
        if(s[i] > 64 && s[i] < 91)
            c+=1;

    if (c > s.size() - c )
    {
        for (int i = 0 ; i < s.size() ; i++)
            if (s[i] > 96 && s[i] < 123)
                s[i]-= 32 ;
    }
    else
    {   
        for (int i = 0 ; i < s.size() ; i++)
            if(s[i] > 64 && s[i] < 91)       
                s[i]+= 32 ;
    }

    cout << s ;
    return 0 ;

}
