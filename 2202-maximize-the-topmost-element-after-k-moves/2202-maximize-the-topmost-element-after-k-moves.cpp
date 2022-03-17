class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n= nums.size();
        if(k==0) return nums[0];
        if(k==1)
        {
            if(n==0 || n==1) return -1;
            else nums[1];
        }
        if(n==1)
        {
            if(k%2==0) return nums[0] ;
            else return -1;
        }
        if(k<n)
        {
            int maxx=0;
            for(int i=0;i<k-1;i++)
            {
                maxx=max(maxx,nums[i]);
            }

            maxx = max(maxx,nums[k]);
            return maxx;
        }
        if(k==n)
        {
            int maxx=0;
            for(int i=0;i<k-1;i++)
            {
                maxx=max(maxx,nums[i]);
            }
            return maxx;
            // maxx = max(maxx,nums[k]);
        }
        if(k>n)
        {
            int maxx=0;
            for(int i=0;i<n;i++)
            {
                maxx=max(maxx,nums[i]);
            }
            return maxx;
        }
        return 1;
    }
};