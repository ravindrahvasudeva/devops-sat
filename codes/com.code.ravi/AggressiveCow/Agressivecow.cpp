//Aggressive Cows
#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>&stall,int &cows,int &key){
        int cnt=1,lastPlacedCow=stall[0];
        for(int i=1;i<stall.size();i++){
            if(stall[i]-lastPlacedCow>=key){
                cnt++;
                lastPlacedCow=stall[i];
            }
            if(cnt==cows)return 1;
        }
        return 0;
    }
int solve(int n, int k, vector<int> &stalls) {
    
        
        sort(stalls.begin(),stalls.end());
        
        int low=1,high=stalls[n-1]-stalls[0],res(1);
        
        while(low<=high){
            int mid = (high-low)>>1;
            mid+=low;
            
            if(check(stalls,k,mid)){
                res=max(res,mid);
                low=mid+1;
            }else
                high=mid-1;
        }
        
        return res;
        
    }

int main(){
    int n,k;
    cin>> n>> k;
    vector<int>stalls(n);
    for(int i=0;i<n;i++){
         cin>>stalls[i];
    }
    cout<<solve(n,k,stalls)<<endl;
    return 0;
}