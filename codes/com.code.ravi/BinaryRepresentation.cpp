#include <bits/stdc++.h>
using namespace std;
 
void bin(unsigned n)
{
   
    if (n > 1)
        bin(n / 2);//recursive function
 
    
    cout << n % 2;//modulo of number to obtain 0 or 1
}
 

int main(void)
{
    bin(7);
    cout << endl;
    bin(4);
}