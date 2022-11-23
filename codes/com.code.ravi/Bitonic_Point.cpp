/*Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.
Note: If the array is increasing then just print the last element will be the maximum value.*/
 #include<bits/stdc++.h>
using namespace std;

int findMaximum(int a[], int n) {
	       
for(int i=0;i<n;i++){
    if(a[i]<a[i+1]){
        continue;
    }
    else{
        return a[i];
    }
}}

int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];}
	findMaximum(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<ends;}
    return 0;}