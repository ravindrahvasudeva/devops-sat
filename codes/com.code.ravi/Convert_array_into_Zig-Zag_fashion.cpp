 #include<bits/stdc++.h>
using namespace std;

void zigZag(int arr[], int n) {
        for(int i=0;i<n-1;i++){
            if(i%2==0 && arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
            } else if(i%2==1 && arr[i] < arr[i+1]){
                swap(arr[i], arr[i+1]);
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
	zigZag(a,n);
    return 0;}