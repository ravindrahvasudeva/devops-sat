 #include<bits/stdc++.h>
using namespace std;
 void sort012(int a[], int n)
    { 
       int zeros=0, ones=0, twos=0;
        
        for(int i=0;i<n;i++){
            int num=a[i];
            if(num==0) zeros++;
            else if(num==1) ones++;
            else if(num==2) twos++;
        }
        int i=0;

        while(i<zeros) {a[i]=0;i++;}
        while(i<zeros+ones) {a[i]=1;i++;}
        while(i<zeros+ones+twos) {a[i]=2;i++;}}

int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];}
	sort012(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<ends;}
    return 0;}