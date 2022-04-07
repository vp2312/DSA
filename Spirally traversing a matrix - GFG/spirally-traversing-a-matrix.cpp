// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        int top=0, bot= 0, cor= r-1, right=c-1;
        vector<int> ans;
        while(bot<=right && cor>=top )
        {
            for(int i=bot;i<=right;i++)
            {
                // cout<<arr[top][i]<<" ";
                ans.push_back(arr[top][i]);
            }
            top++;
            // cout<<endl;
            for(int i=top;i<=cor;i++)
            {
                // cout<<arr[i][right]<<" ";
                ans.push_back(arr[i][right]);
            }
            right--;
            // cout<<endl;
            if(top<=cor)
            {
                for(int i=right;i>=bot;i--)
                {
                    // cout<<arr[cor][i]<<" ";
                    ans.push_back(arr[cor][i]);
                }
                cor--;
                
            }
            
            // cout<<endl;
            if(bot<=right)
            {
                for(int i=cor;i>=top;i--)
                {
                    // cout<<arr[i][bot]<<" ";
                    ans.push_back(arr[i][bot]);
                }
                bot++;
                
            }
            
            // cout<<endl;
            
            // top+=1;
            // right-=1;
            // cor-=1;
            // bot+=1; 
        }
        
        return ans;
        
        
        // int top=0, bot= 0, cor= r-1, right=c-1;
        // vector<int> ans;
        // while(bot<right )
        // {
        //     for(int i=bot;i<=right-1;i++)
        //     {
        //         // cout<<arr[top][i]<<" ";
        //         ans.push_back(arr[top][i]);
        //     }
        //     // cout<<endl;
        //     for(int i=top;i<=cor-1;i++)
        //     {
        //         // cout<<arr[i][right]<<" ";
        //         ans.push_back(arr[i][right]);
        //     }
        //     // cout<<endl;
        //     for(int i=right;i>=bot+1;i--)
        //     {
        //         // cout<<arr[cor][i]<<" ";
        //         ans.push_back(arr[cor][i]);
        //     }
        //     // cout<<endl;
        //     for(int i=cor;i>=top+1;i--)
        //     {
        //         // cout<<arr[i][bot]<<" ";
        //         ans.push_back(arr[i][bot]);
        //     }
        //     // cout<<endl;
            
        //     top+=1;
        //     right-=1;
        //     cor-=1;
        //     bot+=1; 
        // }
        
        // return ans;
          // code here 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends