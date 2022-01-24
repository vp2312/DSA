// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends


int minDeletions(string Y, int n) { 
        string X=Y;
        reverse(Y.begin(),Y.end());
        // int n= X.length();
	   // int = Y.length();
	    int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
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
        
        return n-dp[n][n];
    //complete the function here 
} 