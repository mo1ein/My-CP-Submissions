#include<bits/stdc++.h>
int main ()
{
    long long int n ,sum=0;
    std::cin >> n ;
    std::cout << (n%2==0 ? n/2 : -n/2-1);
}
