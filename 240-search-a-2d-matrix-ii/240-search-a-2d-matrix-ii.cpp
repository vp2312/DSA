class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int X) {
        int N= mat.size();
        int M= mat[0].size();
        int i=0;
	    int j=M-1;
	    while(i>=0 &&  i<N &&j>=0 && j<M )
	    {
	        if(mat[i][j]==X)
	        return true;
	        else if(mat[i][j]>X)
	        j--;
	        else
	        i++;
	        
	        
	    }
	    return false;
        
    }
};