class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        unordered_map<int,int> mp;
        int cnt=0;
        int ans=INT_MIN;
        int k=2;
        while(j<fruits.size())
        {
            mp[fruits[j]]++;
            if(mp[fruits[j]]==1)     cnt++;
            
            if(cnt<k)   
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else if(cnt==k)
            {
                
                ans=max(ans,j-i+1);
                // cout<<ans<<"...";
                j++;
            }
            else if(cnt>k)
            {
                while(cnt>k)
                {
                        mp[fruits[i]]--;
                        if(mp[fruits[i]]==0)     cnt--;
                        i++;
                }
                j++;
            }
            else    ;
        }
        if(ans<0)   return -1;
        return ans;
        
    }
};