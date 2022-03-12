class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (1)
        {
            if(stones.size() ==1)
            {
                return stones[0];
            }
            if(stones.size() == 0)
            {
                return 0;
            }
            
            sort(stones.rbegin(),stones.rend());
            if(stones[0]==stones[1])
            {
                stones.erase(stones.begin());
                stones.erase(stones.begin());
            }
            else
            {
                int ans=abs(stones[0]-stones[1]);
                cout<<ans<<"..";
                stones.erase(stones.begin());
                stones.erase(stones.begin());
                stones.push_back(ans);
            }
        }
        
        return 0;
    }
};