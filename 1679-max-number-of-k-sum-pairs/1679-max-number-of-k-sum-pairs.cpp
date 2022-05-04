class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(auto j:nums)
        {
            mp[j]++;
        }
        // for(auto j:mp)
        // {
        //     cout<<j.first<<" "<<j.second<<endl;
        // }
        // cout<<endl;
        int cnt=0;
        for(auto j :nums)
        {
            int sec=k-j;
            mp[j]--;
            if(mp.find(sec)!=mp.end() )
            {
                if(mp[sec]>0)
                {
                    cnt++;
                    mp[sec]--;
                    // cout<<j<<" "<<sec<<" "<<endl;
                }  
            }
        }
        // cout<<endl;
        return cnt;
    }
};