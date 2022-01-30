class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
         vector<int> v1;
         vector<int> v2;
         vector<int> v3;
        for(int i=0;i<n;i++)
        {
            v3.push_back(nums[i]);
             v3.push_back(nums[i+n]);
        }
        return v3;
    }
};