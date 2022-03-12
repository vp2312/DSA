class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq(stones.begin(),stones.end());
        while (1)
        {
            if(pq.size() ==1)
            {
                return pq.top();
            }
            if(pq.size() == 0)
            {
                return 0;
            }
            
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            // priority_queue <int> pq;
            
            // sort(stones.rbegin(),stones.rend());
            if(a!=b)
            {
                pq.push(abs(a-b));
                // stones.erase(stones.begin());
                // stones.erase(stones.begin());
            }
            // else
            // {
            //     int ans=abs(stones[0]-stones[1]);
            //     cout<<ans<<"..";
            //     stones.erase(stones.begin());
            //     stones.erase(stones.begin());
            //     stones.push_back(ans);
            // }
        }
        
        return 0;
    }
};