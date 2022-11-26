 #include<bits/stdc++.h>
using namespace std;

  int setBits(int N) {
      int a[32];
       int i=0;
      int rem;
       int count=0;
       while(N)
       { 
           rem=N%2;
           N=N/2;
           a[i]=rem;
           i++;
       }
        int j;
     for(int j=0;j<i;j++)  
       {
           if(a[j]==1)
      count++;
      }
       return count;
    }
    int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];}
	cout<<setBits(n);
    return 0;}