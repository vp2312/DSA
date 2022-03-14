class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(auto j: words)
        {
            int x= j.find(pref);
            if(x==0) ans++;
        }
        return ans;
        
    }
};