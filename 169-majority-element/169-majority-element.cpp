class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x= nums.size()/2;
        map<int,int> mp;
        for(auto j: nums)
        {
            if(mp.find(j)==mp.end())
            {
                mp[j]=1;
            }
            else
            {
                mp[j]++;
            }
        }
        for(auto j: mp)
        {
            if(j.second>x)
            {
                return j.first;
            }
        }
        return 1;
        
    }
};