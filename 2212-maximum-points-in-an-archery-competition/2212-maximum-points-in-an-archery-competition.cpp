class Solution {
public:
    vector<int> maximumBobPoints(int W, vector<int>& alice) {
        vector<int> wt;
        for(auto j: alice)
        {
            wt.push_back(j+1);
        }
        
        int n=12;
        int dp[n+1][W+1];
       
           for(int i=0;i<=n;i++){
               for(int j=0;j<=W;j++){
                   if(i==0||j==0)
                   dp[i][j]=0;
               }
           }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=W;j++){
                if(wt[i-1]<=j){
                    dp[i][j]=max((i-1)+dp[i- 1][j-wt[i-1]],dp[i-1][j]);
                }

                else if(wt[i-1]>j)
                dp[i][j]=dp[i-1][j];
            }
        }
        
        // for(int i=0;i<n+1;i++)
        // {
        //     for(int j =0;j<W+1;j++)
        //     {
        //         cout<<dp[i][j]<<"     ";
        //     }
        //     cout<<endl;
        // }
        cout<<dp[n][W]<<endl;
        vector<int> ans;
        int left=0;
        for(int i=12,j=W;i>0;i--)
        {
            if(dp[i-1][j]<dp[i][j])
            {
                ans.push_back(alice[i-1]+1);
                j=j-(alice[i-1]+1);
            }
            else
            {
                ans.push_back(0);
            }
            
            if(i==1 && j>0)
            {
                left=j;
            }
        }
        
        reverse(ans.begin(),ans.end());
        ans[0]=left;
        return ans;   
    }
};