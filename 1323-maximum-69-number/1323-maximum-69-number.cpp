class Solution {
public:
    int maximum69Number (int num) {
        string str=to_string(num);
        string ans="";
        int flag=0;
        for(auto j: str)
        {
            if(j=='6' && flag==0)
            {
                ans.push_back('9');
                flag=1;
            }
            else
            {
                ans.push_back(j);
            }
        }
        
        return stoi(ans);
        
    }
};