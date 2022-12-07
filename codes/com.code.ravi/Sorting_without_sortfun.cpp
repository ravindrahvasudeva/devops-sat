#include<bits/stdc++.h>
using namespace std;
 void sort(int arr[], int n){
 	int temp;
 	  for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] > arr[j]) {    
              swap(arr[i],arr[j]) ;  
           }     
        }     
    }    
 }
 int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];}
	sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<ends;}
    return 0;}