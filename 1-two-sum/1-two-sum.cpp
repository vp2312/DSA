class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
         vector<int> ans;
        //for(int i=0;i<nums.size();i++)
//         {
            
//            if(mp.find(nums[i])==mp.end())
//            {
               
//                mp[nums[i]]=i;
//            }
//         }
        // for(auto j:mp)
        // {
        //     cout<<j.first<<" "<<j.second<<" ";
        // }
        for(int i=0;i<nums.size();i++)
        {
            int val=target-nums[i];
//             if(val==nums[i])
                
//             cout<<"......"<<val<<"....."<<nums[i]<<"..."<<mp[val];
           if(mp.find(val)!=mp.end())
           {
               //cout<<i<<"bbb";
               ans.push_back(i);
               ans.push_back(mp[val]);
               return ans;
               
           }
            mp[nums[i]]=i;
        }
        
        return ans;
    }
};