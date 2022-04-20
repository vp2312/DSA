// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string ,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        vector<int> v;
        for(auto j: mp)
        {
            v.push_back(j.second);    
        }
        sort(v.rbegin(),v.rend());
        
        int x=v[0];
        
        for(auto j: v)
        {
            if(j!=x)
            {
                x= j;
                break;
            }
        }
        
        if(x==v[0]) return "";
        
        // string ans="";
        for(auto j: mp)
        {
            if(j.second==x)
            {
                return j.first;
            }
        }
        
        return "a";
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends