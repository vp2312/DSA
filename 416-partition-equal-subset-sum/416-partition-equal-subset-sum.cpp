class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto j:nums)
        {
            sum+=j;
        }
        if(sum%2!=0) return false;
        bool t[n+1][sum/2+1];
        
        bool ans= solve(nums,n, sum/2);
         return ans;  
        
    }
private :
    bool solve(vector<int>& arr,int n, int sum)
    {
        bool t[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0) t[i][j]=false;
                if(j==0) t[i][j]=true;
                
            }
            
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]= t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
        
    }
};