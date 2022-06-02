class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int n=mat.size();
        int m= mat[0].size();
        vector<vector<int>> trans(m, vector<int>(n, 0));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                trans[j][i]=mat[i][j];
            }
        }
        return trans;
    }
};