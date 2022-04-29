// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &mat, int row, int c){
        int l= 1;
        int r=2000;
        while(l<=r)
        {
            int mid= (l+r)/2;
            // cout<<mid<<endl;
            int count=0;
            for(int i=0;i<row;i++)
            {
                count+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            if(count<=((row*c)/2))
            {
                l=mid+1;
            }
            else
            {
                
                r= mid-1;
                
            }
        }
        return l;
        // code here          
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends