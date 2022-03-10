class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
                    mp[nums[i+1]]++;
            }
        }
        // for(auto j: mp)
        // {
        //     cout<<j.first<<"->"<<j.second<<endl;
        //     // if(j.second > ans)
        //     // {
        //     //     ans=j.first;
        //     //     // cout<< j.second<<" ...";
        //     // }
        // }
        int ans=INT_MIN;
        int ans2;
        for(auto j: mp)
        {
            if(j.second > ans)
            {
                ans=j.second;
                ans2=j.first;
                // cout<< j.second<<" ...";
            }
        }
        
        return ans2;
    }
};