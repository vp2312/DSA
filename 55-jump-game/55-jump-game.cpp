class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int mxre=0;
        for(int i=0; i<nums.size();i++)
        {
            if(i>mxre) return false;
            if(nums[i]+i>mxre) mxre=nums[i]+i;
        }
        
        return true;
    }
};