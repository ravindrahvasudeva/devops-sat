#include<iostream>
using namespace std;
int main()
{

int arr[]={10,20,2,30,40};
int n = sizeof (arr) / sizeof (arr[0]) ;
int x=n/2;
cout<<arr[x] <<"";
return(0);
}
