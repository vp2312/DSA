class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int neg=1,pos=0;
        for(auto j: nums)
        {
            if(j>0)
            {
                ans[pos]=j;
                pos+=2;
            }
            else
            {
                ans[neg]=j;
                neg+=2;
            }
            
        }
        return ans;
    }
};