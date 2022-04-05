class Solution {
public:
    int maxArea(vector<int>& arr) {
        int ans=INT_MIN;
        int n=arr.size();
        int i=0, j=n-1;
        while(i<j)
        {
            ans=max(ans, (j-i)*(min(arr[i],arr[j])));
            if(arr[i]>=arr[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
//         for(int i=0; i<height.size()-1;i++)
//         {
//             for(int j=i+1;j<height.size();j++)
//             {
//                 ans=max(ans, (j-i)*(min(height[i],height[j])));
                
//                 cout<<ans<<" ";
//             }
//         }
        
        return ans;
    }
};