class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        vector<pair<int,char>> v;
        for(int i=0;i<ind.size();i++)
        {
            v.push_back({ind[i],s[i]});
        }
        sort(v.begin(),v.end());
        s.clear();
        for(auto j: v)
        {
            s.push_back(j.second);
        }
        cout<<s<<" ";
        return s;
        
    }
};