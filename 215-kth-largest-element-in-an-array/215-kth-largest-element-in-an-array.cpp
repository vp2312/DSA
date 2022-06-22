class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto &j: nums)
        {
            pq.push(j);
        }
        k--;
        while(k--)
        {
            pq.pop();
        }
        
        return pq.top();
    }
};