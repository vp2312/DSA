class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum=0;
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum>max) max=sum;
            if(sum<0) sum=0;
            
        }
        return max;
        
    }
};