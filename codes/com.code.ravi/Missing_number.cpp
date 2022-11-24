 #include<bits/stdc++.h>
using namespace std;
/*Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.*/
 int MissingNumber(vector<int>& array, int n) {
        int Total;
        Total=(n*(n+1))/2;
        for(int i=0;i<n-1;i++){
            Total-=array[i];
        }
        return Total;
    }

int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];}
	MissingNumber(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<ends;}
    return 0;}