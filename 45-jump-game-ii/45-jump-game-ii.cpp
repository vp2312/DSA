class Solution {
public:
    int jump(vector<int>& nums) {
        
        int mxre=0;
        int currmx=0;
        int jmp=0;                          //unreachable wala case eliminate kara h ques me
        for(int i=0; i<nums.size()-1;i++)
        {
            // currmx=nums[i];
            // if(i>mxre) return false;
            if(nums[i]+i>mxre) mxre=nums[i]+i;
            if(currmx==i) 
            {
                jmp++;
                currmx=mxre;
            }
        }
        
        return jmp;
        
    }
};