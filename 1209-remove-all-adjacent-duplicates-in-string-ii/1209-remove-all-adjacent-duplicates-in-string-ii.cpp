class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>>stk; 
        stk.push({'#', 0});
        
        for(int i = 0; i < size(s); i++)
        {
            stk.push({s[i], stk.top().first == s[i] ? stk.top().second + 1  : 1});
            if(stk.top().second == k) 
            {
                while(stk.top().first == s[i]) 
                    stk.pop();
                s.erase(i - k + 1, k);                
                i -= k;
            }                
        }
        return s;
        // for(int i=0;i<=s.size()-k;i++)
        // int i=0;
//         while(s.size()>=k)
//         {
//             for(int i=0;i<=s.size()-k;i++)
//             {
//                 for(int j=i+1;j<=(k+i-1);j++)
//                 {
//                     if(s[j]!=s[i])
//                     {
//                         break;
//                     }
//                     else if(s[j]==s[i] && j==(k+i-1))
//                     {
//                         s.erase(i,k);
//                     }
//                 }
//             }
            
//             // i++;
//         }
//         return s;
        
        
    }
};