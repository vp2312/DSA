class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> ans;
        sort(inter.begin(),inter.end());
        ans.push_back(inter[0]);
        int k=0;
        for(int i=1;i<inter.size();i++)
        {
            if(inter[i][0]<=ans[k][1])
            {
                ans[k][1]=max(inter[i][1],ans[k][1]);
            }
            else
            {
                vector<int> temp;
                ans.push_back(inter[i]);
                k++;
            }
        }
        return ans;
    }
};