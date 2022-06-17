// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        if(s.empty())   return 0;
        int i=0;
        int j=0;
        // unordered_map<char,int> mp;
        int mp[26]={0};
        int cnt=0;
        int ans=1;
        while(j<s.size())
        {
            mp[s[j]-'a']++;
            if(mp[s[j]-'a']==1)     cnt++;
            
            if(cnt==(j-i+1)) 
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else if(cnt< (j-i+1) )
            {
                while(s[i]!=s[j])
                {
                        mp[s[i]-'a']--;
                        if(mp[s[i]-'a']==0)     cnt--;
                        i++;
                }
                mp[s[i]-'a']--;
                if(mp[s[i]-'a']==0)     cnt--;
                i++;
                j++;
            }
            else    ;
        }
        if(ans<0)   return 0;
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends