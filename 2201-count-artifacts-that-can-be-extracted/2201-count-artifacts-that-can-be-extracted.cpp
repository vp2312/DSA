class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& arti, vector<vector<int>>& dig) {
        
        vector<vector<int>> vis(n, vector<int>(n,0));
        for(int i=0;i<dig.size();i++)
        {
            vis[dig[i][0]][dig[i][1]] =1;
        }
        int ans=0;
        for(int i=0;i<arti.size();i++)
        {
            bool val= false;
            for(int j=arti[i][0];j<=arti[i][2];j++)
            {
                for(int k=arti[i][1];k<=arti[i][3];k++)
                {
                    if(vis[j][k]==0)
                    {
                        val= false ;
                        break;
                    }
                    else
                    {
                        val= true ;
                    }
                }
                if(val== false) break;
            }
            cout<<endl;
            if(val== true) ans++;
        }
        
        return ans;
        
    }
};