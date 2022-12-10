#include <bits/stdc++.h>
using namespace std;

int reversDigits(int num)
{
	int rev_num = 0;
	while (num != 0) {
         if((rev_num> INT_MAX/10) ||(rev_num<INT_MIN/10)){
            return 0;
        }
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}
int main()
{
	int num = 5896;
	cout << "Reverse of no. is " << reversDigits(num);
	return 0;
}
