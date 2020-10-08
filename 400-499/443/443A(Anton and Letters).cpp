#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    set<char> s;
    string l ;
    getline(cin,l);
    for (int i=1;i<l.size()-1;i++)
    {
        if (l[i]!=','&& l[i]!=' ')
            s.insert(l[i]);
    }
    cout << s.size(); 
}
