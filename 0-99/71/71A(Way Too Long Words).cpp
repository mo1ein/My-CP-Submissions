#include <iostream>
using namespace std ;
int main () 
{
int n = 0 ;
string s , temp , list[100] ;
cin >> n ;
for (int i = 0 ; i < n ; i++)
    {
        cin >> s ;
        if (s.size() > 10 )
        {
            temp = to_string(s.size() - 2 );
            list[i] = s[0] + temp + s[s.size() - 1] ;
        }
        else 
            list[i] = s ;
    }  
for (int i = 0 ; i < n ; i++)
    cout << list [i] << endl ;

    return 0 ;
}
