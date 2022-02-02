class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        int ans=0;
        for(auto j : jewels )
        {
            st.insert(j);
        }
        
        for(auto j: stones)
        {
            if(st.find(j)!=st.end())
            {
                ans++;
            }
        }
        return ans;
        
    }
};