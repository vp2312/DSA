// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int start=0;
        int mxln=1;
        for(int i=1;i<s.size();i++)
        {
            int l=i-1;
            int r= i;
            while( l>=0 && r< s.size() && s[l]==s[r])
            {
                if(r-l+1 >mxln)
                {
                    mxln=r-l+1;
                    start=l;
                }
                
                l--;
                r++;
            }
            
            l=i-1;
            r= i+1;
            while(l>=0 && r< s.size() && s[l]==s[r])
            {
                if(r-l+1 >mxln)
                {
                    mxln=r-l+1;
                    start=l;
                }
                
                l--;
                r++;
            }
        }
        // cout<<mxln<<" ";
        return s.substr(start,mxln);
        
        
        
        
        
        
        
        // string x= s;
        // reverse(s.begin(),s.end());
        // string ans="";
        // string cnt="";
        // for(int i=0;i<s.size();i++)
        // {
            
        //     if(s[i]==x[x.size()-i])
        //     {
        //         cnt+= s[i];
        //     }
        //     else
        //     {
        //         if(ans.size()<cnt.size())
        //         {
        //             ans=cnt;
                    
        //         }
        //         cnt="";
        //     }
            
        // }
        // return ans;
        // code here
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends