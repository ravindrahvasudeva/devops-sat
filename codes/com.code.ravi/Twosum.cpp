/*Check if a pair exists with given sum in given array
Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x. */
#include <bits/stdc++.h>
using namespace std;
bool Pair(int A[], int size, int x)
{
	for (int i = 0; i < (size - 1); i++) {
		for (int j = (i + 1); j < size; j++) {
			if (A[i] + A[j] == x) {
				cout<<i<<j;
			}
		}
	}
	
}
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8};//array
	int x = 51;//target
	int size = sizeof(A) / sizeof(A[0]);//sizeofArray
     Pair(A,size,x);
     return 0;
   
}
