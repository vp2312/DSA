class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s= strs[0];
        for(int i=1;i< strs.size();i++)
        {
            int j=0;
            for(int k=0;/*k<strs[i].size() &&*/ j< s.size();k++)
            {
                if(strs[i][k]==s[j])
                {
                    j++;
                    cout<<s[j]<<" ";
                }
                else
                {
                    s= s.substr(0,j);
                    cout<<s<<" ";
                    break;
                }
                
            }
            cout<<endl;
        }
        
        return s;
    }
};