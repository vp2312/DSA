class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        while(left<right)
        {
            int hr=0;
            int mid=(left+right)/2;
            for(auto j:piles)
            {
                hr+= j/mid + (j%mid !=0);
            }
            
            if(hr<=h)
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }
        }
        return right;
    }
};