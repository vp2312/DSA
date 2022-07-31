class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> f;  //op vector
        vector<vector<int>> fi;
        vector<int> sub;  //temp vector
        int cnt=0;
        set<vector<int>> subs;
        set<vector<int>> se;
        subsets(nums,cnt ,sub, subs);  
        for(auto j:subs)
        {
            f.push_back(j);
        }
        for(int i=0;i<f.size();i++)
        {
            sort(f[i].begin(),f[i].end());
        }
        for(auto j: f)
        {
            se.insert(j);
            // sort(j.begin(),j.end());
        }
        for(auto j:se)
        {
            fi.push_back(j);
        }
        
        return fi;
    }
private:
    void subsets(vector<int>& nums,int cnt, vector<int>& sub, set<vector<int>>& subs) {
        
        if(cnt==nums.size())
        {
            subs.insert(sub);
            return;
        }
        vector<int> temp1(sub);
        vector<int> temp2(sub);
        temp2.push_back(nums[cnt]);   //erase fn use mat karna sala galat kaam karata h
        subsets(nums,cnt+1, temp1, subs);
        subsets(nums,cnt+1, temp2, subs);
        return;
        
    }
};