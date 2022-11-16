#include<iostream>
using namespace std;
int find(int arr[],int n)
{int flag;
	int count = 0;
	for(int i=0;i<n;i++)
	{
	
	    flag=0;
	   for(int j=i+1;j<n;j++)
	   {
	    if(arr[i]==arr[j])
		{
	      flag=1;
	      break;
	  }
}
if(flag==0)
	count++;}
	return count;
}
int main()
{
	int arr[]={10,20,101,20,30,50};
	int size=sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr,size);
    return 0;
    
}
