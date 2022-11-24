 #include<bits/stdc++.h>
using namespace std;
   long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n,greater<int>());
        sort(b,b+n);
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum =sum+a[i]*b[i];
        }
        return sum;
    }
    int main()
{
    int  n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];}
    for(int i=0;i<n;i++){
    	cin>>b[i];}
	minValue(a,b,n);
    for(int i=0;i<n;i++){
        cout<<minValue(a,b,n)<<ends;}
    return 0;}