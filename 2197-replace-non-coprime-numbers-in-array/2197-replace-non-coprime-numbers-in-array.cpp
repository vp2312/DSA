class Solution {
public:
    long long hcf(long long a, long long b){
	if(b==0) return a;
	return hcf(b, a%b);
}
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();++i)
        {
            long long y=nums[i];
            while(ans.size()>0 && hcf(ans.back(),y)>1)
            {
                long long x=ans.back();
                ans.pop_back();
                y= x*y/hcf(x,y);
            }
            ans.push_back(y);
        }
        
        return ans;
    }
};