class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int ans=0;
        for(int i=0;i<sen.size();i++)
        {
            string str=sen[i];
            int num=count(str.begin(),str.end(), ' ');
            ans=max(num,ans);
        }
        return ans+1;
        
    }
};