class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto j:mp)
        {
            ans+= j.second*(j.second-1)/2;
        }
        return ans;
    }
};