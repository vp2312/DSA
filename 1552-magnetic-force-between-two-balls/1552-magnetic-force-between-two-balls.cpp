class Solution {
public:
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        int l=1;
        int r=pos[pos.size()-1]-pos[0];
        int ans=-1;
        while(l<=r)
        {
            int mid= l+(r-l)/2 ;
            if(possible(pos,m,mid)==true)
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
    
    static bool possible(vector<int>& pos, int m, int dis)
    {
        int cor=pos[0];
        int cnt=1;
        for(int i=1;i<pos.size();i++)
        {
            if((pos[i]-cor)>=dis)
            {
                cor=pos[i];
                cnt++;
            }
            
            if(cnt==m)  return true;
        }
        
        return false;
    }
};