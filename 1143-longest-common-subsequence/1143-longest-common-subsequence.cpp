class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        
        int DP[n+1][m+1];
        memset(DP,0,sizeof(DP));
        
        for(int i=1 ; i<n+1 ; i++)
        {
            for(int j=1 ; j<m+1 ; j++)
            {
                if(text1[i-1]==text2[j-1])
                    DP[i][j] = 1+DP[i-1][j-1];
                else
                    DP[i][j]=max(DP[i][j-1],DP[i-1][j]);
            }
        }
        return DP[n][m];
    }
};