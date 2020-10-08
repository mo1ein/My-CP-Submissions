#include <bits/stdc++.h>
int main ()
{
    int n,a,e=0,le=0,o=0,lo=0 ;
    std::cin >> n ;
    for (int i=0;i<n;i++){
        std::cin >> a;
        if (a%2==0){e++;le=i+1;}
        else{o++;lo=i+1;}
    }
    (e==1)? std::cout << le : std::cout << lo;
}

