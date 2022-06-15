// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int k= pat.size();
	    unordered_map<char,int> mp;
	    for(int i=0;i<k;i++)
	    {
	        mp[pat[i]]++;
	    }
	    int i=0;
	    int j=0;
	    int cnt=mp.size();
	    int ans=0;
	    while(j<txt.size())
	    {
	        if(mp.find(txt[j])!=mp.end())
	        {
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0)   cnt--;
	        }
	        
	        if(j-i+1<k) j++;
	        else
	        {
	            if(cnt==0)  ans++;
	             if(mp.find(txt[i])!=mp.end())
	             {
    	            mp[txt[i]]++;
    	           // cnt++;
    	            if(mp[txt[i]]==1)   cnt++;
	             }
	             i++;
	             j++;
	        }
	    }
	    return ans;
	    
	    // code here
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends