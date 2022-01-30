class Solution {
public:
    int maximumWealth(vector<vector<int>>& act) {
        int x=0;
        for(int i=0;i<act.size();i++)
        {
            int ans=0;
            for(auto j:act[i])
            {
                ans+=j;
            }
            x=max(ans,x);
            
        }
        return x;
        
    }
};