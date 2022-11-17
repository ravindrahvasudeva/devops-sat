#include<iostream>
using namespace std;

int arrayrev(int arr[],int n);
int temp;
int main() {
 int n,temp;
 cin>>n;
 int arr[n],i,j;
 for(int i=0;i<n;i++)
 {cin>>arr[i];}
 arrayrev(arr,n);
//cout<<temp;
}
int arrayrev(int arr[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
       temp=arr[i]; 
    cout<< temp;}
    
   
}
