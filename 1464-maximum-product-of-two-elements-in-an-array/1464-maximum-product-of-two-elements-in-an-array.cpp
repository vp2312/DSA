class Solution {
public:
    int maxProduct(vector<int>& nums) {
         priority_queue<int> pq(nums.begin(),nums.end());
        int a=pq.top()-1;
        pq.pop();
        int b=pq.top()-1;
        return a*b;
    }
};