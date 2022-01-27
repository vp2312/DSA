class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        string str=to_string(x);
        string m=str;
        reverse(str.begin(),str.end());
        if(m==str)
        {
            return true;
        }
        else return false;
        
    }
};