#include<iostream>
#include<algorithm>
using namespace std;
bool ann(string s1,string s2){
	int rlen=s1.length(),slen =s2.length(),i;
     
    if(rlen!=slen)
      return false;
    else{
    	sort(s1.begin(),s1.end());//listen->eilnst
    	sort(s2.begin(),s2.end());//silent->eilnst
    	for(int i=0;i<rlen;i++)
    	{
    		if(s1[i]!=s2[i])
    		  return false;
    	}
    	return true;
		}}
int main(){
   string s1,s2;
   cin>>s1;
   cin>>s2;
   if(ann(s1,s2))
     cout<<"yes";
    else cout<<"no";
}
