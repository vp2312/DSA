class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid1, int k) {
        if(grid1[0].size() == 1 && grid1.size() == 1 ) return grid1;
    
    bool flag = false;
    vector<vector<int>> grid2(grid1.size(), vector<int>(grid1[0].size(), 0));
    while(k--){
        if(!flag){
            for(int i = 0;i<grid1.size();i++){
                for(int j = 0;j < grid1[0].size();j++){
                    if(i == 0 && j == 0) continue;
                    else if(i == grid1.size()-1 && j == grid1[0].size()-1){
                        grid2[0][0] = grid1[i][j];
                        grid2[i][j] = j == 0 ? grid1[i-1][j] : grid1[i][j-1];
                    }
                    else if(j == 0) grid2[i][j] = grid1[i-1][grid1[0].size()-1];
                    else grid2[i][j] = grid1[i][j-1];
                }
            }
            flag = true;
        }
        else{
            for(int i = 0;i<grid1.size();i++){
                for(int j = 0;j < grid1[0].size();j++){
                    if(i == 0 && j == 0) continue;
                    else if(i == grid1.size()-1 && j == grid1[0].size()-1){
                        grid1[0][0] = grid2[i][j];
                        grid1[i][j] = j == 0? grid2[i-1][j] : grid2[i][j-1];
                    }
                    else if(j == 0) grid1[i][j] = grid2[i-1][grid2[0].size()-1];
                    else grid1[i][j] = grid2[i][j-1];
                }
            }
            flag = false;
        }
    }
    
    return flag ? grid2 : grid1;
    }
};