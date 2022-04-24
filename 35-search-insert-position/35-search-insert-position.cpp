class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();

        int low= 0, high= n-1;
            int ans=-1;
            //  cout<<low<<" "<<high<<endl;
            while(low<=high)
            {
                int ind=low+ (high-low)/2;
                if(nums[ind]==target)
                {
                    return ind;
                }
                else if(nums[ind]>target)
                {
                    // ans=ind-1;
                    high=ind-1;
                }
                else if(nums[ind]<target)
                {
                    ans=ind;
                    low=ind+1;

                }
                else    ;
            }

            return ans+1;
        
    }
};