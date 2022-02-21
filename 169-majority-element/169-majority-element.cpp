class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ans=0;
        for(auto j: nums)
        {
            if (cnt==0)
            {
                ans=j;
            }
           
            if(j==ans) cnt++;
            else cnt--;
        }
        return ans;
    }
};