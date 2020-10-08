#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;std::cin>>n; std::cout << (n<0 ? (int(n/10) >= int(n/10)-int(n/10)%10 + n%10) ? int(n/10) : int(n/10)-int(n/10)%10 + n%10:n);  
}
