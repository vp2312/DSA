class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& ind) {
        int mat[m][n];
        int ans=0;
        memset(mat,0,sizeof(mat));
        for(auto j: ind )
        {
            for(int i=0;i<n;i++)
            {
                mat[j[0]][i]++;
            }
            for(int i=0;i<m;i++)
            {
                mat[i][j[1]]++;
            } 
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (mat[i][j]%2!=0) ans++;
            }
        }
            
        return ans;
    }
};