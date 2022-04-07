class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n= mat[0].size();
        // int high=
        // while()
        for(auto j: mat)
        {
            if(j[0]<=target && j[n-1]>=target)
            {
                int low= 0;
                int high= n-1;
                int mid= (low+high)/2;
                while(low<=high)
                {
                    if(j[mid]==target)
                    {
                        return true;
                    }
                    else if(j[mid]>target)
                    {
                        high = mid-1;
                    }
                    else
                    {
                        low =mid+1;
                    }
                    
                    mid=(low+high)/2;
                }
                return false;
            }
        }
        
        return false;
        
        
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix[i].size();j++)
//             {
//                 if( matrix[i][j]== target )
//                 {
//                     return true;
//                 }
//             }
//         }
        
//         return false;
    }
};