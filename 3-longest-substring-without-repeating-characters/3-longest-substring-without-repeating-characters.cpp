class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())   return 0;
        int i=0;
        int j=0;
        unordered_map<char,int> mp;
        int cnt=0;
        int ans=1;
        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp[s[j]]==1)     cnt++;
            
            if(cnt==(j-i+1)) 
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else if(cnt< (j-i+1) )
            {
                while(s[i]!=s[j])
                {
                        mp[s[i]]--;
                        if(mp[s[i]]==0)     cnt--;
                        i++;
                }
                mp[s[i]]--;
                if(mp[s[i]]==0)     cnt--;
                i++;
                j++;
            }
            else    ;
        }
        if(ans<0)   return 0;
        return ans;
    }
};