class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> mp;
        for(int i=0;i<mat.size();i++)
        {
            int sum=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    sum++;
                }
            }
            mp.push_back({sum,i});
        }
        
        sort(mp.begin(),mp.end());
        vector<int> ans;
        for(auto j: mp)
        {
            
           if(k>0) ans.push_back(j.second);
            k--;
        }
        
        return ans;
    }
};