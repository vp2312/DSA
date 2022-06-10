class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> sub_strng;
        
        int i = 0, j = 0, n = s.size(), ans = 0;
        while(j < n)
        {
            if(sub_strng.find(s[j]) == sub_strng.end())
            {
                sub_strng.insert(s[j]);
                j++;
                ans = max(ans, j - i);
            }
            else
            {
                sub_strng.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};