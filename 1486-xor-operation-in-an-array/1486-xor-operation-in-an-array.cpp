class Solution {
public:
    
    int xorOperation(int n, int start) {
        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back(start+2*i);
        // }
        int ans=start;
        for(int i=1;i<n;i++)
        {
            ans= ans xor start+2*i;
        }
        return ans;
        
    }
};