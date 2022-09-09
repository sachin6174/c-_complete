// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    char encryptString(string s){
        
        sort(s.begin(),s.end());
        int maxi=0;
        int len=1;
        char ans=s[0];
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                len++;
            }else{
                // cout<<len<<" ";
                if(maxi)
            ans=s[i-1];

                maxi=max(maxi,len);
                len=1;
            }
        } 
        if(s[s.size()-2]!=s[s.size()-1]){
            // cout<<1;
        }   
        return ans;   
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		char ans = ob.encryptString(s);

		cout<<ans<<endl;
	}

}
  // } Driver Code Ends