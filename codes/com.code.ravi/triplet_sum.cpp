#include<bits/stdc++.h>
using namespace std;

/*bool find3Numbers(int A[], int arr_size, int sum)
{
    // Fix the first element as A[i]
    for (int i = 0; i < arr_size - 2; i++)
    {
 
        // Fix the second element as A[j]
        for (int j = i + 1; j < arr_size - 1; j++)
        {
 
            // Now look for the third number
            for (int k = j + 1; k < arr_size; k++)
            {
                if (A[i] + A[j] + A[k] == sum)
                {
                    cout << "Triplet is " << A[i] <<
                        ", " << A[j] << ", " << A[k];
                    return true;
                }
            }
        }
    }
 
    // If we reach here, then no triplet was found
    return false;
}*/

bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n;i++)
        { int  l=i+1,r=n-1;
        
            while(l<r)
            {
                
                   if(A[i]+A[l]+A[r]==X) return 1;
                   else if(A[i]+A[l]+A[r]<X) l++;
                   else r--;
                
            }
        }return 0;
    }
    
int main()
{
	int n,X,A[n];
	cin>>n,X;
	for(int i=0;i<n;i++)
	   cin>>A[i];
	cout<<find3Numbers(A,n,X)<<endl;
	
}
