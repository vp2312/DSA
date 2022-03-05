class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        int x=s.size();
        int y=t.size();
        for(int i=0;i<x;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<y;i++)
        {
            mp[t[i]]--;
        }
        
        int ans=0;
        for(auto j: mp)
        {
            ans+=abs(j.second);
        }
        return ans;
    }
};