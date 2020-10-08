#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string s,tmp;
    cin >> s ;
    regex w("WUB");
    cout << regex_replace(s,w," ");
}
