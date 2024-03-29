class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for(auto j: arr)
        {
            mp.insert({j, -9});
        }
        
        int n=nums2.size();
        vector<int>v , v1;
        stack<int>s;
        
        for(int i= n-1;i>=0 ;i--)
        {
            if(s.size() == 0) 
            {
                if(mp.find(nums2[i])!=mp.end())
                {
                    mp[nums2[i]]=-1;
                }
            }
            else if(s.size() > 0 && s.top() > nums2[i] )
            {
                    if(mp.find(nums2[i])!=mp.end())
                    {
                        mp[nums2[i]]=s.top();
                    }
            }
            else if(s.size()>0 && s.top() <= nums2[i])
            {
                while(s.size()>0 && s.top() <= nums2[i])    s.pop();
                
                if(s.size() == 0)
                {
                    if(mp.find(nums2[i])!=mp.end())
                    {
                        mp[nums2[i]]=-1;
                    }
                }
                else
                {
                    if(mp.find(nums2[i])!=mp.end())
                    {
                        mp[nums2[i]]=s.top();
                    }
                }
            }
            s.push(nums2[i]);
        }
        for(auto j: arr)
        {
            // cout<<j.first<<" ";
            v.push_back(mp[j]);
            //v1.push_back(j.first);
        }
        
        //reverse(v.begin(),v.end());
        //reverse(v1.begin(),v1.end());
        // for(auto j: v1)
        // {
        //     cout<<j<<" ";
        //     // v.push_back(j.second);
        //     // v1.push_back(j.second);
        // }
        
        
        return v;
        
    }
};