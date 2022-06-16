// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i=0;
        int j=0;
        unordered_map<char,int> mp;
        int cnt=0;
        int ans=INT_MIN;
        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp[s[j]]==1)     cnt++;
            
            if(cnt<k)   j++;
            else if(cnt==k)
            {
                
                ans=max(ans,j-i+1);
                // cout<<ans<<"...";
                j++;
            }
            else if(cnt>k)
            {
                while(cnt>k)
                {
                        mp[s[i]]--;
                        if(mp[s[i]]==0)     cnt--;
                        i++;
                }
                j++;
            }
            else    ;
        }
        if(ans<0)   return -1;
        return ans;
    // your code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends