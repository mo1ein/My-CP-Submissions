#include <iostream>
using namespace std;
int main()
{
    int q, n, i;
    string s;
    cin >> q;
    for (i=0 ;i < q ; i++)
    {
        cin >> n >> s;
        if(n == 2 && s[0] >= s[1])
            cout<<"NO\n";
        else
            cout<<"YES\n2\n"<<s[0] << " "<< s.substr(1,n)<<"\n"; 
    }
    return 0;
}