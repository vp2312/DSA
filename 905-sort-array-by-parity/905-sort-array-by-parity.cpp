class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int pt=nums.size()-1;
        int eve=-1;
        while(eve<pt)
        {
            if(nums[pt]%2==0)
            {
                swap(nums[eve+1],nums[pt]);
                eve++;
            }
            else
            {
                pt--;
            }
        }
        return nums;
    }
};