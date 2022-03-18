class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;  //op vector
        vector<int> sub;  //temp vector
        int cnt=0;
        subsets(nums,cnt ,sub, subs);   
        
        return subs;
    }
private:
    void subsets(vector<int>& nums,int cnt, vector<int>& sub, vector<vector<int>>& subs) {
        
        if(cnt==nums.size())
        {
            subs.push_back(sub);
            return;
        }
        vector<int> temp1(sub);
        vector<int> temp2(sub);
        temp2.push_back(nums[cnt]);
        subsets(nums,cnt+1, temp1, subs);
        subsets(nums,cnt+1, temp2, subs);
        return;
    }
};