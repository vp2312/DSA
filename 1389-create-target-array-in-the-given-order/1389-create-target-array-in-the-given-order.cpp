class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<pair<int, int>> v;
        for(int i=0;i<index.size();i++)
        {
            v.push_back({index[i],nums[i]});
        }
        // sort(v.begin(),v.end());
        // for(auto j: v)
        // {
        //     cout<<j.first <<" "<<j.second<<endl;
        // }
        nums.clear();
        auto it=nums.begin();
        for(auto j: v)
        {
            nums.insert(it+j.first,j.second);
            // nums.push_back(j.second);
        }
        return nums;
    }
};