class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(auto j: nums)
        {
            if(j== target) return true;
        }
        
        return false;
    }
};