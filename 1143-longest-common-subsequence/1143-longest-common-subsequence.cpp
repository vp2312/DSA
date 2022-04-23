class Solution {
    public:
    int t[1050][1050];
    Solution()
    {
        memset(t,-1,sizeof(t));
    }
    int sub(string& S1, string& S2, int n, int m)
    {
        if(n==0 || m==0)
        {
            return 0;
        }
        if(t[n][m]!=-1)
        {
            return t[n][m];
        }
        if(S1[n-1]==S2[m-1])
        {
            return t[n][m]= 1+sub(S1, S2, n-1, m-1);
        }
        else
        {
            return t[n][m]= max(sub(S1, S2, n,m-1), sub(S1, S2, n-1,m));
        }
        return t[n][m];
    };
    
public:
    int longestCommonSubsequence(string text1, string text2) {
        int len1=text1.length();
        int len2=text2.length();
        return sub(text1,text2,len1,len2);
    }
};