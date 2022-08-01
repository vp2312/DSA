class Solution {
public:
    int evalRPN(vector<string>& tok) {
        stack<int> s;
        for(auto j: tok)
        {
            if(!(j=="+"  || j=="-"|| j=="*"  || j=="/" ))
            {
                s.push(stoi(j));
            }
            else
            {
                int a= s.top();
                s.pop();
                int b= s.top();
                s.pop();
                if(j=="+")
                {
                    s.push(a+b);
                }
                else if(j=="-")
                {
                    s.push(b-a);
                }
                else if(j=="*")
                {
                    s.push(a*b);
                }
                else if(j=="/")
                {
                    s.push(b/a);
                }
            }
        }
        
        return s.top();
        
        
    }
};