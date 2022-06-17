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
            cout<<j<<" ";
            mp[s[j]]++;
            if(mp[s[j]]==1)     cnt++;
            
            if(cnt==(j-i+1)) 
            {
                ans=max(ans,j-i+1);
                j++;
            }
            // if(j == s.size())      ans=max(ans,j-i);
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
                // cout<<ans<<"...";
                // j++;
            }
//             else if(cnt>k)
//             {
                
//             }
            else    ;
        }
        if(ans<0)   return 0;
        return ans;
//         unordered_set <char> sub_strng;
        
//         int i = 0, j = 0, n = s.size(), ans = 0;
//         while(j < n)
//         {
//             if(sub_strng.find(s[j]) == sub_strng.end())
//             {
//                 sub_strng.insert(s[j]);
//                 j++;
//                 ans = max(ans, j - i);
//             }
//             else
//             {
//                 sub_strng.erase(s[i]);
//                 i++;
//             }
//         }
//         return ans;
    }
};