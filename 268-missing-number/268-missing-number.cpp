class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int tot= nums.size()*(nums.size()+1)/2;
        int sum=0;
        for(auto j:nums )
        {
            sum+=j;
        }
        return tot-sum;
        
        
//         vector<int> v;
        
//         int ans=nums[0];
//         for(int i=0;i<nums.size();i++)
//         {
//             v[nums[i]]=1;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             if(v[i]!=1) return i;
//         }
        
//         return ans;
        
    }
};