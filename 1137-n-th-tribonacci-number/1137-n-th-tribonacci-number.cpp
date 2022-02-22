class Solution {
public:
    int tribonacci(int n) {
        int dp[40];
        for(int i=0;i<40;i++)
        {
            dp[i]=-1;
        }
        int ans =solve(n,dp);
        return ans;
        
    }
public:
    int solve(int n, int dp[]) {
        if(dp[n]!=-1) return dp[n];
        if(n==0 ) return 0;
        if(n==1 || n==2 ) return 1;
        dp[n]=solve(n-1 , dp)+ solve(n-2, dp)+ solve(n-3,dp);
        return dp[n];
    }
};