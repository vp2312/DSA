class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n= nums.size();
        int j=n-1;
        int i=0;
        while(i<j)    
        {
            if((nums[i]+ nums[j])>target)
            {
                j--;
            }
            else if((nums[i]+nums[j])<target)
           {
               i++;
           }
           else
           {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
           }
               
        }
        return ans;
        
        
    }
};