class Solution {
public:
    int minimizedMaximum(int n, vector<int>& q) {
        int l=1;
        int r=*max_element(q.begin(),q.end());
        while(l<r)
        {
            int req=0;
            int mid=(l+r)/2;
            for(auto j:q)
            {
                req+=j/mid + (j%mid!=0);
            }
            
            if(req<=n)
            {
                r=mid;
            }
            else l=mid+1;
        }
        return r;
    }
};