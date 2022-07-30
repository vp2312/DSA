class Solution {
public:
    int trap(vector<int>& arr) {
        int n= arr.size();
        int maxl[n];
        int maxr[n];
        int maxx= INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxx= max( arr[i], maxx);
            maxl[i]= maxx;
        }
        maxx= INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            maxx= max( arr[i], maxx);
            maxr[i]= maxx;
        }
        
        long long water[n];
        long long ans=0;
        
        for(int i=0;i<n;i++)
        {
            water[i]= min(maxl[i], maxr[i])- arr[i];
            ans+= water[i];
        }
        
        return ans;
        
    }
};