class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rk, string rv) {
          int ans=0;
        if(rk=="type")
        {
           
            for(int i=0;i<items.size();i++)
            {
                if(items[i][0]==rv)
                    ans++;
            }
        }
            else if(rk=="color")
            {
                
                for(int i=0;i<items.size();i++)
                {
                    if(items[i][1]==rv)
                        ans++;
                }
            }
            else 
            {
                
                for(int i=0;i<items.size();i++)
                {
                    if(items[i][2]==rv)
                        ans++;
                }
            }
        return ans;
    }
};