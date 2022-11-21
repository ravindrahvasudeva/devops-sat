 #include<bits/stdc++.h>
using namespace std;
 int binarysearch(int arr[], int n, int k) {
        
        int s=0,e=n-1,m=(s+e)/2;
        while(s<=e){
            if(arr[m]==k)
            {
                return m;
            }
            if(k>arr[m])    
            {
                s=m+1;
            }
            else{
                e=m-1;
            }
         m=s+(e-s)/2;
        }
      return -1;
        
    }
    int main()
{
    int  n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];}
    	cin>>k;
	cout<<binarysearch(a,n,k);
    
    return 0;}