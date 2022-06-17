// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string t)
    {
        // Your code here
         unordered_map<char,int> mp;
        for(int i=0 ; i<t.length() ;i++)    mp[t[i]]++;
        string ans="";
        int i=0,j=0;
        int currlen=INT_MAX;
        int count=mp.size();
        while(j<s.length())
        {
           if(mp.find(s[j])!=mp.end())
           {
               mp[s[j]]--;
               if(mp[s[j]]==0)
               count--;
           }
    
           if(count>0)
           j++;
           else if(count==0)
           {
                if(j-i+1 < currlen)
                {
                    ans=s.substr(i,j-i+1);
                    currlen=ans.size();
                }
               // ans=min(ans,j-i+1);    
               while(count==0)
               {
                   if(mp.find(s[i])==mp.end())
                   {
                       i++;
                       if(j-i+1 < currlen)
                        {
                            ans=s.substr(i,j-i+1);
                            currlen=ans.size();
                        }
                       // ans=min(ans,j-i+1);  
                   }
                   else
                   {
                       mp[s[i]]++;
                       if(mp[s[i]]>0)
                       {
                           i++;
                           count++;
                       }
                       else
                       {
                           i++;
                           if(j-i+1 < currlen)
                            {
                                ans=s.substr(i,j-i+1);
                                currlen=ans.size();
                            }
                           // ans=min(ans,j-i+1); 
                       }
                   }
               }
               j++;
           }
        }
        if(ans.size()==0)
        {
            ans+="-1";
        }
        // cout<<ans<<endl;
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
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends