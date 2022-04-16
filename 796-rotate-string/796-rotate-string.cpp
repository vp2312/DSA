class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int n= s.size();
        queue<char> q1,q2;
        for(int i=0;i<n;i++)
        {
            q1.push(s[i]);
            q2.push(goal[i]);
        }
        
        if(s==goal) return true;
        while(n--)
        {
            q2.push(q2.front());
            q2.pop();
            
            if(q2==q1)  return true;
        }
        
        return false;
    }
};