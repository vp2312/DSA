class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low= 0, high= nums.size()-1;
        int ind=low+high/2;
        while(low<=high)
        {
            if(nums[ind]>target)
            {
                high=ind-1;
            }
            else if(nums[ind]<target)
            {
                low=ind+1;
            }
            else
            {
                return ind;
            }
            
            ind=(low+high)/2;
        }
        
        return -1;
        
    }
};