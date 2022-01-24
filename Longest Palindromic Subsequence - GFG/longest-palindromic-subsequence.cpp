// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string Y) {
        string X=Y;
        reverse(Y.begin(),Y.end());
        int n= X.length();
	    int m= Y.length();
	    int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(X[i-1]==Y[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        
        // for(int i=0;i<n+1;i++)
        // {
        //     for(int j=0;j<m+1;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        return dp[n][m];
        //code here
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends