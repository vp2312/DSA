class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int> v;
        // int sum=0;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
            // v.push_back(sum);
        }
        return nums;
        
    }
};