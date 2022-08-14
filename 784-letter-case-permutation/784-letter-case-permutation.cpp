class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        
        vector<string> ans;
        string op= "";
        // op.push_back(S[0]);
        int cnt=0;
        permu(cnt, op ,s, ans );
        return ans;
        // Code Here
    }
private:

    void permu(int cnt, string& op ,string& s , vector<string>& ans )
    {
        if(cnt== s.length())
        {
            ans.push_back(op);
            return;
        }
        if( !isalpha(s[cnt]))
        {
            string op1=op;
            op1.push_back(s[cnt]);
            permu(cnt+1,op1,s,ans);
            
        }
        else
        {
            string op1= op;
        string op2= op;
        op1.push_back(tolower(s[cnt]));
        // op2.push_back(' ');
        op2.push_back(toupper(s[cnt]));
        permu(cnt+1,op2,s,ans);
        permu(cnt+1,op1,s,ans);
            
        }
        
           return;
    }
};