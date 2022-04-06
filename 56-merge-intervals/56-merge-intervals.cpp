class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> ans;
        sort(inter.begin(),inter.end());
        // for(auto j: inter)
        // {
        //     cout<<j<<" ";
        // }
        for(int i=0;i<inter.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<inter[i][j]<<" ";
            }
            cout<<endl;
        }
        ans.push_back(inter[0]);
        int k=0;
        for(int i=1;i<inter.size();i++)
        {
            if(inter[i][0]<=ans[k][1])
            {
                // int start=inter[i-1][0];
                ans[k][1]=max(inter[i][1],ans[k][1]);
                // int end= inter[i][1];
                // vector<int> temp;
                // temp.push_back(start);
                // temp.push_back(end);
                // ans.push_back(temp);
            }
            else
            {
                vector<int> temp;
                ans.push_back(inter[i]);
                k++;
                // temp.push_back(end);
                // ans.push_back(temp);
            }
        }
        return ans;
        
    }
};