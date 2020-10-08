#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if (s[s.size()-1]=='0')
        cout<<s;
    else
    {
        int n;
        string l;
        l = s[s.size()-1];
        n = stoi(l);
        if (stoi(l) >= 5)
            cout<<10-n+stoi(s);   
        else
            cout<<stoi(s)-n;
    }
}
