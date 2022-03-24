class Solution {
public:
    int numRescueBoats(vector<int>& pple, int limit) {
//         for(int i =0;i<pple.size();i++)
//         {
            
//         }
        sort(pple.begin(),pple.end());
        int start=0;
        int end=pple.size()-1;
        int ans=0;
        while(start<=end)
        {
            cout<<pple[start]<< "  "<<pple[end]<<".."<<ans+1 <<endl;
            if(pple[start]+pple[end] <=limit)
            {
                start++;
                end--;
                ans++;
            }
            else
            {
                end--;
                ans++;
            }
        }
        return ans;
    }
};