class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>> v;
        s.push_back(' ');
        int strt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                
                string x= s.substr(strt,i-strt-1);
                int y= s[i-1]-48;
                v.push_back({y,x});
                strt=i+1;
            }
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i].second;
            if(i+1!=v.size())
                ans.push_back(' ');
        }
        return ans;
        
    }
};