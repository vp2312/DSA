class Solution {
public:
    string defangIPaddr(string add) {
        string str="";
        for(int i=0;i<add.length();i++)
        {
            if(add[i]=='.')
            {
                str.push_back('[');
                str.push_back(add[i]);
                str.push_back(']');
            }
            else str.push_back(add[i]);
        }
        return str;
        
    }
};