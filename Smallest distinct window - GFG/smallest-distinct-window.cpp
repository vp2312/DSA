// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string s)
    {
        unordered_map<char,int> mp;
        for(int i=0 ; i<s.length() ;i++)
        {
            if(mp.find(s[i])==mp.end())     mp[s[i]]++;
        }
        int ans=INT_MAX;
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
                // if(j-i+1 < currlen)
                // {
                //     ans=s.substr(i,j-i+1);
                //     currlen=ans.size();
                // }
                ans=min(ans,j-i+1);    
               while(count==0)
               {
                   if(mp.find(s[i])==mp.end())
                   {
                       i++;
                        ans=min(ans,j-i+1);  
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
                        //   if(j-i+1 < currlen)
                        //     {
                        //         ans=s.substr(i,j-i+1);
                        //         currlen=ans.size();
                        //     }
                            ans=min(ans,j-i+1); 
                       }
                   }
               }
               j++;
           }
        }
        // if(ans.size()==0)
        // {
        //     ans+="-1";
        // }
        // cout<<ans<<endl;
        return ans;
        // Your code goes here   
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends