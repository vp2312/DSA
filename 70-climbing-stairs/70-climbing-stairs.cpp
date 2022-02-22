class Solution {
public:
    int climbStairs(int n) {
        int dp[50];
        for(int i=0;i<50;i++)
        {
            dp[i]=-1;
        }
        int ans =solve(n,dp);
        return ans;
        
    }
public:
    int solve(int n, int dp[]) {
        if(dp[n]!=-1) return dp[n];
        if(n==1 ) return 1;
        if(n==2  ) return 2;
        dp[n]=solve(n-1 , dp)+ solve(n-2, dp);
        return dp[n];
        
    }
};