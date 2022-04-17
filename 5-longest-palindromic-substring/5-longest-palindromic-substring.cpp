class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int mxln=1;
        for(int i=1;i<s.size();i++)
        {
            int l=i-1;
            int r= i;
            while( l>=0 && r< s.size() && s[l]==s[r])
            {
                if(r-l+1 >mxln)
                {
                    mxln=r-l+1;
                    start=l;
                }
                
                l--;
                r++;
            }
            
            l=i-1;
            r= i+1;
            while(l>=0 && r< s.size() && s[l]==s[r])
            {
                if(r-l+1 >mxln)
                {
                    mxln=r-l+1;
                    start=l;
                }
                
                l--;
                r++;
            }
        }
        // cout<<mxln<<" ";
        return s.substr(start,mxln);
        
    }
};