class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int ans=INT_MAX;
        if(n<k)return 0;
        int m=k;
        
        int cnt=0;
        
        int j=0, h;
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W')  cnt++;
        }
        ans=min(ans, cnt);
        for(int i=k;i<n;i++)
        {
            if(blocks[j]=='W')  cnt--;
            if(blocks[i]=='W')  cnt++;
            j++;
            ans=min(ans, cnt);
        }
        if(ans >100)    return 0;
        return ans;
    }
};