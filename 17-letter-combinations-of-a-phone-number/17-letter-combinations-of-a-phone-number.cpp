class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="")  return {};
        
        string op="";
        vector<string> ans;
        solve(digits,op,ans);
        return ans;
    }
    
    void solve(string digits,string op,vector<string> &ans)
    {
        vector<string> v={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(digits.size()==0) 
        {
            ans.push_back(op);
            return;
        }
        string s = v[digits[0] - '0'];   
        digits.erase(digits.begin()+0);
        
        for(int i=0;i<s.length();i++)
        { 
            solve(digits,op+s[i],ans);
        }
    }
};