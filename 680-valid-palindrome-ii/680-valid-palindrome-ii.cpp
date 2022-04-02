class Solution {
public:
    bool ispalin(string g, int x, int y)
    {
        while(x<y){
        if(g[x]==g[y])
        {
            x++;
            y--;
        }else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        string a=s;
        reverse(s.begin(),s.end());
        int j=s.size()-1;
        int i=0;
        while(i<j)
        {
            if(a[i]!=s[i]) return ispalin(s,i+1,j) || ispalin(s, i,j-1);
            else 
            {
                i++;
                j--;
            }
        }
        
        // if(cnt>1) return false;
        return true;
            
    }
};