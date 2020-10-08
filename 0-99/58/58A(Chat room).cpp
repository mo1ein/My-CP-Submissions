#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string s,m="hello";
    int j=0;
    cin >> s ;
    for (int i = 0;i<s.size();i++)
    {
        if (s[i] == m[j])
            j++;
    }
    (j==5) ? cout << "YES" : cout << "NO";
}
