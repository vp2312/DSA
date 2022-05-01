class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
            {
                a.push(s[i]);
            }
            else if(!a.empty()) a.pop();
            else ;
        }
        // if(s[s.size()-1]!='#')  a.push(s[s.size()-1]);
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
            {
                b.push(t[i]);
            }
            else if(!b.empty()) b.pop();
            else ;
        }
        // if(t[t.size()-1]!='#')  b.push(t[t.size()-1]);
        
        if(a==b) return true;
        return false;
    }
};