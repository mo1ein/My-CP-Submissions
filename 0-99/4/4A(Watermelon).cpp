#include <iostream>
#include <iomanip>
#include<stdlib.h>
using namespace std;

int main(){
    int w = 0 , x = 0 ;
    cin >> w ;
    if (w <= 2)
    	cout << "NO" ;
    else 
    {
    	if (w % 2 == 0)
   			cout << "YES" ;
   		else 
   			cout << "NO" ;
   	}
    return 0;
}