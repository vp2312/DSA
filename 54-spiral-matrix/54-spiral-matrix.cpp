class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int r=arr.size();
        int c=arr[0].size();
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
        
    }
};