class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start+1<=nums.size()-1 && nums[start]<= nums[start+1]) start++;
        while(end-1>=0  && nums[end-1]<=nums[end]) end--;
        
        if(start==nums.size()-1) return 0;
        int wmin=INT_MAX,wmax=INT_MIN;
        for(int i= start;i<=end;i++)
        {
            wmin=min(wmin,nums[i]);
            wmax=max(wmax,nums[i]);
        }
        
        while(start-1>=0 && wmin<nums[start-1]) start--;
        while(end+1<=nums.size()-1  && wmax>nums[end+1]) end++;
        return end-start+1;
        
//         int fd=-1;
//         int ld=-1;
//         int flag=0;
//         for(int i=1;i<nums.size();i++)
//         {
//             if(nums[i]<nums[i-1] && flag==0)
//             {
//                 fd=ld=i;
//                 flag=1;
//             }
//             else if(nums[i]<=nums[i-1] && flag==1)
//             {
//                 ld=i;
//             }
//             else    ;
            
//         }
        
//         if(fd==ld && fd==-1)    return 0;
//         else if(fd==ld) return 2;
//         return ld-fd+2;
    }
};