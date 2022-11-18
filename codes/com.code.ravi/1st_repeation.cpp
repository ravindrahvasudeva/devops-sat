#include<bits/stdc++.h>
using namespace std;

int firstElementKTime(int a[], int n, int k)
    {  
        map<int,int> freq;
        
        for(int i=0;i<n;i++){
           freq[a[i]]++;
           if(freq[a[i]]==k) return a[i];
        
        }
        return -1;
       
    }
    
int main()
{
	int n,k,a[n];
	cin>>n;
	cin>>k;
	for(int i=0;i<n;i++){
	 cin>>a[i];
	 }
	cout<<firstElementKTime(a,n,k)<<endl;
	return 0;
}
