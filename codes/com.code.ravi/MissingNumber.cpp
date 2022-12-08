#include <bits/stdc++.h>
using namespace std;
/*it basically has a formula  the total size of array with size +1 by 2 when subracted by each and every element in the array we can get the miising value in that perticular array*/ 

int getMissingNo(int a[], int n)
{
	
	int N = n + 1;

	int total = (N) * (N + 1) / 2;
	for (int i = 0; i < n; i++)
		total -= a[i];
	return total;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,11,12};
	int N = sizeof(arr) / sizeof(arr[0]);
	int miss = getMissingNo(arr, N);
	cout << miss;
	return 0;
}
