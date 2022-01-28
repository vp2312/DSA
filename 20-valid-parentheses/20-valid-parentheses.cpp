class Solution {
public:
    bool isValid(string s) {
        stack<char>  st;
        st.push('1');
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ) 
            {
                st.push(s[i]);
            }
            else if(s[i]==')' && st.top()!='(')
            {
                return false;
            }
            else if(s[i]==']' && st.top()!='[')
            {
                return false;
            }
            else if(s[i]=='}' && st.top()!='{')
            {
                return false;
            }
            else if(s[i]==')' && st.top()=='(' || s[i]==']' && st.top()=='[' || s[i]=='}' && st.top()=='{' )
            {
                st.pop();
            }
        }
        if(st.top()=='1')
        {
            return true;
        }
        return false;
    }
};