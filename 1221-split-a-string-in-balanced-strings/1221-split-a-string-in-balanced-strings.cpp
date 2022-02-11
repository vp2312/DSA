class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int m=0;
        for(auto j: s)
        {
            if(j=='L')  m++;
            else m--;
            if(m==0)
                ans++;
        }
        return ans;
    }
};