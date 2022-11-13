#include<iostream>
using namespace std;
int main(){
    int n1,n2,GCD;
    cout<< "enter 2 numbers";
    cin>>n1>>n2;

    for (int i = 0; i < =n1 && i< n2; ++i)
    {
        if(n1%i==0 && n2%i==0){ 
            GCD=i;
        }
    }g
    cout<<GCD;
    return 0;
    
}