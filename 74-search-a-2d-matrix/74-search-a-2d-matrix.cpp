class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
//         int n = matrix.size();
//         int m = matrix[0].size();
//         int start = 0, end = m*n - 1;
        
//         while(start <= end)
//         {
//             int mid = start + (end - start) / 2;
//             int ind = matrix[mid/m][mid%m];
//             if (target == ind)
//                 return true;
//             else if(target < ind)
//                 end = mid - 1;
//             else
//                 start = mid + 1;       
//         }
                int m=mat.size();
                int n= mat[0].size();
                int low= 0;
                int high= m*n-1;
                while(low<=high)
                {

                    int mid=low + (high - low) / 2;
                    int val=mat[mid/n][mid%n];
                    if(val==target)
                    {
                        return true;
                    }
                    else if(val>target)
                    {
                        high = mid-1;
                    }
                    else if(val<target)
                    {
                        low =mid+1;
                    }
                }
                return false;
                
            

            // return false;
        
//         int m=mat.size();
//         int n= mat[0].size();
//         // int high=
//         // while()
//         for(auto j: mat)
//         {
//             if(j[0]<=target && j[n-1]>=target)       // NLogN Approach
//             {
//                 int low= 0;
//                 int high= n-1;
//                 int mid= (low+high)/2;
//                 while(low<=high)
//                 {
//                     if(j[mid]==target)
//                     {
//                         return true;
//                     }
//                     else if(j[mid]>target)
//                     {
//                         high = mid-1;
//                     }
//                     else
//                     {
//                         low =mid+1;
//                     }
                    
//                     mid=(low+high)/2;
//                 }
//                 return false;
//             }
//         }
        
//         return false;
        
        
//         for(int i=0;i<matrix.size();i++)   // N^2 Approach
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