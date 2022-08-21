class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int len= cost.size();
        int lev=len/3;
//         for(int i=0;i<len;i++)
//         {
//             cst=0
//             for(int j=0;j<lev;i++)
//             {

//             }
//             cst+=
//         }
        int ans=0;
        sort(cost.begin(),cost.end());
        int j=0;
        for(int i=len-1;i>=0;i--)
        {
            // if(i%3!=0 && (len-j)>=3)
            // {
            //     ans+=cost[i];
            // }
            if ((len-j)<3)
            {
                ans+=cost[i];
            }
            else
            {
                ans+=cost[i]+cost[i-1];
                i=i-2;
                j+=2;
            }
            j++;
        }
        cout<<ans;
        return ans;
        
    }
};