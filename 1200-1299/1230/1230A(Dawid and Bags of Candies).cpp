#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int a[4]; 
    for (int i = 0; i < 4; ++i) 
        cin >> a[i];
    sort(a, a+4);
    if (a[0]+a[3]==a[1]+a[2])
        cout << "YES";
    else if (a[0]+a[1]+a[2]==a[3])
        cout << "YES" ;
    else
        cout << "NO" ;
  
    return 0; 
} 
