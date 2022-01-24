class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        int n=a.length();
        int m= b.length();
        int dp[n+1][m+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
//          for(int i=0;i<n+1;i++)
//         {
//             for(int j=0;j<m+1;j++)
//             {
//                     cout<<dp[i][j]<<" ";
                
//             }
//             cout<<endl;
//         }
        
        int i = n, j = m;
	string lcs = ""; // store charecter when it is equal in the table 
	while (i > 0 || j > 0) {
        if(i==0 || j==0)
        {
            if(i>0)
            {
                lcs += a[i - 1]; // insert in string 
			    i--;
            }
            else
            {
                lcs += b[j - 1]; // insert in string 
			     j--;
            }
        }
		else if (a[i - 1] == b[j - 1]) {
			lcs += a[i - 1]; // insert in string 
			i--, j--;
		}
		else {
			if (dp[i][j - 1] > dp[i - 1][j]){
                lcs+=b[j-1];
                j--;
            }
				
                 // move to the larger side 
			else{
                lcs+=a[i-1];
                i--;
            }
				
		}
	}
	reverse(lcs.begin(), lcs.end()); // at last reverse the string to get LCS 

	return lcs;
        
        // return dp[n][m];
        // return "sa";
        
    }
};