//program to revrse a  given string 
#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    int len = str.length();
    int n = len;
    while(n--)
        cout << str[n];
}
 

int main(void)
{
    string s = "Ravindrahv";
 
    reverse(s);
    return (0);
}