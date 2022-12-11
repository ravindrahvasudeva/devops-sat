/*Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.*/
#include <bits/stdc++.h>
using namespace std;
bool Po2(int num){
    int n = 1;
    for(int i=0;i<=30;i++){
        if(n==num){
            return true;
        }
        n=n*2;
    }return false;
}
int main()
{
	int num = 1073741824;
	cout << Po2(num);
	return 0;
}